#include "SimpleRemoteControl.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "GarageDoor.h"
#include "GarageDoorOpenCommand.h"

#include <iostream>
#include <limits>

using namespace std;

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
