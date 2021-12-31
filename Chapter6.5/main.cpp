#include "RemoteControlWithUndo.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "Stereo.h"
#include "StereoOnCommand.h"
#include "StereoOffCommand.h"
#include "TV.h"
#include "TVOnCommand.h"
#include "TVOffCommand.h"
#include "Hottub.h"
#include "HottubOnCommand.h"
#include "HottubOffCommand.h"
#include "Command.h"
#include "MacroCommand.h"

#include <iostream>

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


    std::cout << remoteControl->toString() << std::endl;
    std::cout << "--- Pushing Macro On ---" << std::endl;
    remoteControl->onButtonWasPushed(0);
    std::cout << "--- Pushing Macro Off ---" << std::endl;
    remoteControl->offButtonWasPushed(0);

    return 0;
}
