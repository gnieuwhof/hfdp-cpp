#include "RemoteControlWithUndo.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"

#include <iostream>

int main()
{
    RemoteControlWithUndo * remoteControl = new RemoteControlWithUndo;

    Light * livingRoomLight = new Light("Living Room");

    LightOnCommand * livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand * livingRoomLightOff =
        new LightOffCommand(livingRoomLight);

    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    std::cout << remoteControl->toString() << std::endl;
    remoteControl->undoButtonWasPushed();
    remoteControl->offButtonWasPushed(0);
    remoteControl->onButtonWasPushed(0);
    std::cout << remoteControl->toString() << std::endl;
    remoteControl->undoButtonWasPushed();

    return 0;
}
