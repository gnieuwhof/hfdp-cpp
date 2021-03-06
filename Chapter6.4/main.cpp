#include "RemoteControlWithUndo.h"
#include "CeilingFan.h"
#include "CeilingFanMediumCommand.h"
#include "CeilingFanHighCommand.h"
#include "CeilingFanOffCommand.h"

#include <iostream>

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
    std::cout << remoteControl->toString() << std::endl;
    remoteControl->undoButtonWasPushed();

    remoteControl->onButtonWasPushed(1);
    std::cout << remoteControl->toString() << std::endl;
    remoteControl->undoButtonWasPushed();

    return 0;
}
