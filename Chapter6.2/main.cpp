#include <iostream>
#include <limits>
#include <string>
#include <sstream>

using namespace std;

class Command
{
    public:
        virtual void execute(){};
        virtual string toString() = 0;
};

class Light
{
    protected:
        string location;

    public:
        Light(string location)
        {
            this->location = location;
        }

        void on()
        {
            cout << location << " Light is on" << endl;
        }

        void off()
        {
            cout << location << " Light is off" << endl;
        }
};

class GarageDoor
{
    protected:
        string location;

    public:
        GarageDoor(string location)
        {
            this->location = location;
        }

        void up()
        {
            cout << location << " Garage Door is Open" << endl;
        }

        void down()
        {
            cout << location << " Garage Door is Closed" << endl;
        }

        void stop()
        {
            cout << location << " Garage Door is Stopped" << endl;
        }

        void lightOn()
        {
            cout << location << " Garage light is On" << endl;
        }

        void lightOff()
        {
            cout << location << " Garage light is Off" << endl;
        }
};

class Stereo
{
    protected:
        string location;

    public:
        Stereo(string location)
        {
            this->location = location;
        }

        void on()
        {
            cout << location << " Stereo is On" << endl;
        }

        void off()
        {
            cout << location << " Stereo is Off" << endl;
        }

        void setCD()
        {
            cout << location << " Stereo is set to CD" << endl;
        }

        void setDvd()
        {
            cout << location << " Stereo is set to DVD" << endl;
        }

        void setRadio()
        {
            cout << location << " Stereo is set to Radio" << endl;
        }

        void setVolume(int level)
        {
            cout << location << " Stereo volume is set to " << level << endl;
        }
};

class GarageDoorUpCommand: public Command
{
    private:
        GarageDoor * garageDoor;

    public:
        GarageDoorUpCommand(GarageDoor * garageDoor)
        {
            this->garageDoor = garageDoor;
        }

        void execute()
        {
            garageDoor->up();
        }

        string toString()
        {
            return "GarageDoorUpCommand";
        }
};

class GarageDoorDownCommand: public Command
{
    private:
        GarageDoor * garageDoor;

    public:
        GarageDoorDownCommand(GarageDoor * garageDoor)
        {
            this->garageDoor = garageDoor;
        }

        void execute()
        {
            garageDoor->down();
        }

        string toString()
        {
            return "GarageDoorDownCommand";
        }
};

class LightOnCommand: public Command
{
    private:
        Light * light;

    public:
        LightOnCommand(Light * light)
        {
            this->light = light;
        }

        void execute()
        {
            light->on();
        }

        string toString()
        {
            return "LightOnCommand";
        }
};

class LightOffCommand: public Command
{
    private:
        Light * light;

    public:
        LightOffCommand(Light * light)
        {
            this->light = light;
        }

        void execute()
        {
            light->off();
        }

        string toString()
        {
            return "LightOffCommand";
        }
};

class StereoOnWithCDCommand: public Command
{
    private:
        Stereo * stereo;

    public:
        StereoOnWithCDCommand(Stereo * stereo)
        {
            this->stereo = stereo;
        }

        void execute()
        {
            stereo->on();
            stereo->setCD();
            stereo->setVolume(11);
        }

        string toString()
        {
            return "StereoOnWithCDCommand";
        }
};

class StereoOffCommand: public Command
{
    private:
        Stereo * stereo;

    public:
        StereoOffCommand(Stereo * stereo)
        {
            this->stereo = stereo;
        }

        void execute()
        {
            stereo->off();
        }

        string toString()
        {
            return "StereoOffCommand";
        }
};

class NoCommand: public Command
{
    public:
        void execute(){}

        string toString()
        {
            return "NoCommand";
        }
};

class RemoteControl
{
    protected:
        Command * onCommands[7];
        Command * offCommands[7];

    public:
        RemoteControl()
        {
            Command * noCommand = new NoCommand;
            for (int i = 0; i < 7; i++)
            {
                onCommands[i] = noCommand;
                offCommands[i] = noCommand;
            }
        }

        void setCommand(int slot, Command * onCommand, Command * offCommand)
        {
            onCommands[slot] = onCommand;
            offCommands[slot] = offCommand;
        }

        void onButtonWasPushed(int slot)
        {
            onCommands[slot]->execute();
        }

        void offButtonWasPushed(int slot)
        {
            offCommands[slot]->execute();
        }

        string toString()
        {
            stringstream result;
            result << "--- Remote Control ---" << endl;
            //string result = "\n--- Remote Control ---\n";
            for (int i = 0; i < 7; i++)
            {
                result << "[slot " << i << "] ";
                result << onCommands[i]->toString() << "    ";
                result << offCommands[i]->toString() << endl;
                /*
                result.append("[slot ");
                stringstream sstream;
                sstream << i;
                result.append(sstream.str());
                result.append("] ");
                result.append(onCommands[i]->toString());
                result.append("    ");
                result.append(offCommands[i]->toString());
                result.append("\n");
                */
            }
            return result.str();
        }
};

int main()
{
    RemoteControl * remoteControl = new RemoteControl;
    Light * livingRoomLight = new Light("Living Room");
    Light * kitchenLight = new Light("Kitchen");

    GarageDoor * garageDoor = new GarageDoor("");
    Stereo * stereo = new Stereo("Living Room");

    LightOnCommand * livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand * livingRoomLightOff =
        new LightOffCommand(livingRoomLight);

    LightOnCommand * kitchenLightOn = new LightOnCommand(kitchenLight);
    LightOffCommand * kitchenLightOff = new LightOffCommand(kitchenLight);

    GarageDoorUpCommand * garageDoorUp = new GarageDoorUpCommand(garageDoor);
    GarageDoorDownCommand * garageDoorDown =
        new GarageDoorDownCommand(garageDoor);

    StereoOnWithCDCommand * stereoOnWithCD = new StereoOnWithCDCommand(stereo);
    StereoOffCommand * stereoOff = new StereoOffCommand(stereo);

    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl->setCommand(2, garageDoorUp, garageDoorDown);
    remoteControl->setCommand(3, stereoOnWithCD, stereoOff);

    cout << remoteControl->toString() << endl;;

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    remoteControl->onButtonWasPushed(1);
    remoteControl->offButtonWasPushed(1);
    remoteControl->onButtonWasPushed(2);
    remoteControl->offButtonWasPushed(2);
    remoteControl->onButtonWasPushed(3);
    remoteControl->offButtonWasPushed(3);

    return 0;
}
