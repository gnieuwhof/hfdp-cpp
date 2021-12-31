#ifndef REMOTECONTROLWITHUNDO_H
#define REMOTECONTROLWITHUNDO_H

#include "Command.h"

#include <string>

class RemoteControlWithUndo
{
    public:
        RemoteControlWithUndo();
        virtual ~RemoteControlWithUndo();

        void setCommand(int slot, Command * onCommand, Command * offCommand);
        void onButtonWasPushed(int slot);
        void offButtonWasPushed(int slot);
        void undoButtonWasPushed();
        std::string toString();

    protected:
        Command * onCommands[7];
        Command * offCommands[7];
        Command * undoCommand;

    private:
};

#endif // REMOTECONTROLWITHUNDO_H
