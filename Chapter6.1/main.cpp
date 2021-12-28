#include <iostream>
#include <limits>

using namespace std;

class Command
{
    public:
        virtual void execute(){};
};

class Light
{
    public:
        void on()
        {
            cout << "Light is on" << endl;
        }

        void off()
        {
            cout << "Light is off" << endl;
        }
};

class GarageDoor
{
    public:
        void up()
        {
            cout << "Garage Door is Open" << endl;
        }

        void down()
        {
            cout << "Garage Door is Closed" << endl;
        }

        void stop()
        {
            cout << "Garage Door is Stopped" << endl;
        }

        void lightOn()
        {
            cout << "Garage light is On" << endl;
        }

        void lightOff()
        {
            cout << "Garage light is Off" << endl;
        }
};

class GarageDoorOpenCommand: public Command
{
    private:
        GarageDoor * garageDoor;

    public:
        GarageDoorOpenCommand(GarageDoor * garageDoor)
        {
            this->garageDoor = garageDoor;
        }

        void execute()
        {
            garageDoor->up();
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
};

class SimpleRemoteControl
{
    private:
        Command * slot;

    public:
        void setCommand(Command * command)
        {
            slot = command;
        }

        void buttonWasPressed()
        {
            slot->execute();
        }
};

int main()
{
    SimpleRemoteControl * remote = new SimpleRemoteControl;
    Light * light = new Light;
    LightOnCommand * lightOn = new LightOnCommand(light);

    remote->setCommand(lightOn);
    remote->buttonWasPressed();

    delete light;
    delete lightOn;

    GarageDoor * garageDoor = new GarageDoor;
    GarageDoorOpenCommand * garageOpen = new GarageDoorOpenCommand(garageDoor);
    remote->setCommand(garageOpen);
    remote->buttonWasPressed();

    delete garageDoor;
    delete garageOpen;
    delete remote;

    return 0;
}
