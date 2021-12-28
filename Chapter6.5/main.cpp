#include <iostream>
#include <limits>
#include <string>
#include <sstream>

using namespace std;

class Command
{
    public:
        virtual void execute(){};
        virtual void undo(){};
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

class CeilingFan
{
    protected:
        string location;
        int speed;

    public:
        static const int HIGH = 3;
        static const int MEDIUM = 2;
        static const int LOW = 1;
        static const int OFF = 0;

        CeilingFan(string location)
        {
            this->location = location;
            speed = OFF;
        }

        void high()
        {
            speed = HIGH;
            cout << location << " ceiling fan is on high" << endl;
        }

        void medium()
        {
            speed = MEDIUM;
            cout << location << " ceiling fan is on medium" << endl;
        }

        void low()
        {
            speed = LOW;
            cout << location << " ceiling fan is on low" << endl;
        }

        void off()
        {
            speed = OFF;
            cout << location << " ceiling fan is off" << endl;
        }

        int getSpeed()
        {
            return speed;
        }
};

class TV
{
    protected:
        string location;
        int channel;

    public:
        TV(string location)
        {
            this->location = location;
        }

        void on()
        {
            cout << location << " TV is on" << endl;
        }

        void off()
        {
            cout << location << "TV is off" << endl;
        }

        void setChannel(int channel)
        {
            this->channel = channel;
            cout << location << " TV is set to channel " << channel << endl;
        }
};

class Hottub
{
    protected:
        bool isOn;
        int temperature;

    public:
        void on()
        {
            isOn = true;
        }

        void off()
        {
            isOn = false;
        }

        void circulate()
        {
            if (isOn)
            {
                cout << "Hottub is bubling!" << endl;
            }
        }

        void jetsOn()
        {
            if (isOn)
            {
                cout << "Hottub jets are on" << endl;
            }
        }

        void jetsOff()
        {
            if (isOn)
            {
                cout << "Hottub jets are off" << endl;
            }
        }

        void setTemperature(int temperature)
        {
            if (temperature > this->temperature)
            {
                cout << "Hottub is heating to a steaming " << temperature;
                cout << " degrees" << endl;
            }else
            {
                cout << "Hottub is cooling to " << temperature;
                cout << " degrees" << endl;
            }
            this->temperature = temperature;
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

class CeilingFanHighCommand: public Command
{
    protected:
        CeilingFan * ceilingFan;
        int prevSpeed;

    public:
        CeilingFanHighCommand(CeilingFan * ceilingFan)
        {
            this->ceilingFan = ceilingFan;
        }

        void execute()
        {
            prevSpeed = ceilingFan->getSpeed();
            ceilingFan->high();
        }

        void undo()
        {
            if (prevSpeed == CeilingFan::HIGH)
            {
                ceilingFan->high();
            } else if (prevSpeed == CeilingFan::MEDIUM)
            {
                ceilingFan->medium();
            } else if (prevSpeed == CeilingFan::LOW)
            {
                ceilingFan->low();
            } else if (prevSpeed == CeilingFan::OFF)
            {
                ceilingFan->off();
            }
        }

        string toString()
        {
            return "CeilingFanHighCommand";
        }
};

class CeilingFanMediumCommand: public Command
{
    protected:
        CeilingFan * ceilingFan;
        int prevSpeed;

    public:
        CeilingFanMediumCommand(CeilingFan * ceilingFan)
        {
            this->ceilingFan = ceilingFan;
        }

        void execute()
        {
            prevSpeed = ceilingFan->getSpeed();
            ceilingFan->medium();
        }

        void undo()
        {
            if (prevSpeed == CeilingFan::HIGH)
            {
                ceilingFan->high();
            } else if (prevSpeed == CeilingFan::MEDIUM)
            {
                ceilingFan->medium();
            } else if (prevSpeed == CeilingFan::LOW)
            {
                ceilingFan->low();
            } else if (prevSpeed == CeilingFan::OFF)
            {
                ceilingFan->off();
            }
        }

        string toString()
        {
            return "CeilingFanMediumCommand";
        }
};

class CeilingFanOffCommand: public Command
{
    protected:
        CeilingFan * ceilingFan;
        int prevSpeed;

    public:
        CeilingFanOffCommand(CeilingFan * ceilingFan)
        {
            this->ceilingFan = ceilingFan;
        }

        void execute()
        {
            prevSpeed = ceilingFan->getSpeed();
            ceilingFan->off();
        }

        void undo()
        {
            if (prevSpeed == CeilingFan::HIGH)
            {
                ceilingFan->high();
            } else if (prevSpeed == CeilingFan::MEDIUM)
            {
                ceilingFan->medium();
            } else if (prevSpeed == CeilingFan::LOW)
            {
                ceilingFan->low();
            } else if (prevSpeed == CeilingFan::OFF)
            {
                ceilingFan->off();
            }
        }

        string toString()
        {
            return "CeilingFanOffCommand";
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

        void undo()
        {
            garageDoor->down();
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

        void undo()
        {
            garageDoor->up();
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

        void undo()
        {
            light->off();
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

        void undo()
        {
            light->on();
        }

        string toString()
        {
            return "LightOffCommand";
        }
};

class TVOnCommand: public Command
{
    private:
        TV * tv;

    public:
        TVOnCommand(TV * tv)
        {
            this->tv = tv;
        }

        void execute()
        {
            tv->on();
            tv->setChannel(3);
        }

        void undo()
        {
            tv->off();
        }

        string toString()
        {
            return "TVOnCommand";
        }
};

class TVOffCommand: public Command
{
    private:
        TV * tv;

    public:
        TVOffCommand(TV * tv)
        {
            this->tv = tv;
        }

        void execute()
        {
            tv->off();
        }

        void undo()
        {
            tv->off();
        }

        string toString()
        {
            return "TVOffCommand";
        }
};

class HottubOnCommand: public Command
{
    private:
        Hottub * hottub;

    public:
        HottubOnCommand(Hottub * hottub)
        {
            this->hottub = hottub;
        }

        void execute()
        {
            hottub->on();
            hottub->setTemperature(104);
            hottub->circulate();
        }

        void undo()
        {
            hottub->off();
            hottub->setTemperature(89);
        }

        string toString()
        {
            return "HottubOnCommand";
        }
};

class HottubOffCommand: public Command
{
    private:
        Hottub * hottub;

    public:
        HottubOffCommand(Hottub * hottub)
        {
            this->hottub = hottub;
        }

        void execute()
        {
            hottub->off();
            hottub->setTemperature(98);
        }

        void undo()
        {
            hottub->on();
            hottub->setTemperature(104);
            hottub->circulate();
        }

        string toString()
        {
            return "HottubOffCommand";
        }
};

class StereoOnCommand: public Command
{
    private:
        Stereo * stereo;

    public:
        StereoOnCommand(Stereo * stereo)
        {
            this->stereo = stereo;
        }

        void execute()
        {
            stereo->on();
            stereo->setCD();
            stereo->setVolume(11);
        }

        void undo()
        {
            stereo->off();
        }

        string toString()
        {
            return "StereoOnCommand";
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

        void undo()
        {
            stereo->on();
            stereo->setCD();
            stereo->setVolume(11);
        }

        string toString()
        {
            return "StereoOffCommand";
        }
};

class MacroCommand: public Command
{
    private:
        Command** commands;
        int numberOfCommands;

    public:
        MacroCommand(Command** commands, int numberOfCommands)
        {
            this->commands = commands;
            this->numberOfCommands = numberOfCommands;
        }

        void execute()
        {
            for (int i = 0; i < numberOfCommands; i++)
            {
                commands[i]->execute();
            }
        }

        string toString()
        {
            return "MacroCommand";
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

class RemoteControlWithUndo
{
    protected:
        Command * onCommands[7];
        Command * offCommands[7];
        Command * undoCommand;

    public:
        RemoteControlWithUndo()
        {
            Command * noCommand = new NoCommand;
            for (int i = 0; i < 7; i++)
            {
                onCommands[i] = noCommand;
                offCommands[i] = noCommand;
            }
            undoCommand = noCommand;
        }

        void setCommand(int slot, Command * onCommand, Command * offCommand)
        {
            onCommands[slot] = onCommand;
            offCommands[slot] = offCommand;
        }

        void onButtonWasPushed(int slot)
        {
            onCommands[slot]->execute();
            undoCommand = onCommands[slot];
        }

        void offButtonWasPushed(int slot)
        {
            offCommands[slot]->execute();
            undoCommand = offCommands[slot];
        }

        void undoButtonWasPushed()
        {
            undoCommand->undo();
        }

        string toString()
        {
            stringstream result;
            result << "--- Remote Control ---" << endl;
            for (int i = 0; i < 7; i++)
            {
                result << "[slot " << i << "] ";
                result << onCommands[i]->toString() << "    ";
                result << offCommands[i]->toString() << endl;
            }
            return result.str();
        }
};

int main()
{
    RemoteControlWithUndo * remoteControl = new RemoteControlWithUndo;

    Light * light = new Light("Living Room");
    LightOnCommand * lightOn = new LightOnCommand(light);
    LightOffCommand * lightOff = new LightOffCommand(light);

    Stereo * stereo = new Stereo("Living Room");
    StereoOnCommand * stereoOn = new StereoOnCommand(stereo);
    StereoOffCommand * stereoOff = new StereoOffCommand(stereo);

    TV * tv = new TV("Living Room");
    TVOnCommand * tvOn = new TVOnCommand(tv);
    TVOffCommand * tvOff = new TVOffCommand(tv);

    Hottub * hottub = new Hottub();
    HottubOnCommand * hottubOn = new HottubOnCommand(hottub);
    HottubOffCommand * hottubOff = new HottubOffCommand(hottub);

    Command * partyOn[] = {lightOn, stereoOn, tvOn, hottubOn};
    Command * partyOff[] = {lightOff, stereoOff, tvOff, hottubOff};

    MacroCommand * partyOnMacro = new MacroCommand(partyOn, 4);
    MacroCommand * partyOffMacro = new MacroCommand(partyOff, 4);

    remoteControl->setCommand(0, partyOnMacro, partyOffMacro);


    cout << remoteControl->toString() << endl;
    cout << "--- Pushing Macro On ---" << endl;
    remoteControl->onButtonWasPushed(0);
    cout << "--- Pushing Macro Off ---" << endl;
    remoteControl->offButtonWasPushed(0);

    return 0;
}
