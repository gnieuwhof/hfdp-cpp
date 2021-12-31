#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "Command.h"

class RemoteControl
{
    public:
        RemoteControl();
        virtual ~RemoteControl();

        void setCommand(int slot, Command * onCommand, Command * offCommand);
        void onButtonWasPushed(int slot);
        void offButtonWasPushed(int slot);
        std::string toString();

    protected:
        Command * onCommands[7];
        Command * offCommands[7];

    private:
};

#endif // REMOTECONTROL_H
