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

        void undo()
        {
            stereo->off();
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

    CeilingFan * ceilingFan = new CeilingFan("Living Room");

    CeilingFanMediumCommand * ceilingFanMedium =
        new CeilingFanMediumCommand(ceilingFan);

    CeilingFanHighCommand * ceilingFanHigh =
        new CeilingFanHighCommand(ceilingFan);

    CeilingFanOffCommand * ceilingFanOff =
        new CeilingFanOffCommand(ceilingFan);

    remoteControl->setCommand(0, ceilingFanMedium, ceilingFanOff);
    remoteControl->setCommand(1, ceilingFanHigh, ceilingFanOff);

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    cout << remoteControl->toString() << endl;
    remoteControl->undoButtonWasPushed();

    remoteControl->onButtonWasPushed(1);
    cout << remoteControl->toString() << endl;
    remoteControl->undoButtonWasPushed();

    return 0;
}
