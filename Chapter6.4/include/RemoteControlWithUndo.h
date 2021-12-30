#ifndef REMOTECONTROLWITHUNDO_H
#define REMOTECONTROLWITHUNDO_H

#include "Command.h"

#include <string>

using namespace std;

class RemoteControlWithUndo
{
    public:
        RemoteControlWithUndo();
        virtual ~RemoteControlWithUndo();

        void setCommand(int slot, Command * onCommand, Command * offCommand);
        void onButtonWasPushed(int slot);
        void offButtonWasPushed(int slot);
        void undoButtonWasPushed();
        string toString();

    protected:
        Command * onCommands[7];
        Command * offCommands[7];
        Command * undoCommand;

    private:
};

#endif // REMOTECONTROLWITHUNDO_H
