#include "RemoteControl.h"
#include "Light.h"
#include "GarageDoor.h"
#include "Stereo.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "GarageDoorUpCommand.h"
#include "GarageDoorDownCommand.h"
#include "StereoOnWithCDCommand.h"
#include "StereoOffCommand.h"

#include <iostream>

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

    std::cout << remoteControl->toString() << std::endl;

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
