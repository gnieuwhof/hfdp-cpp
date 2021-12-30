#include "RemoteControlWithUndo.h"
#include "NoCommand.h"

#include <sstream>

RemoteControlWithUndo::RemoteControlWithUndo()
{
    Command * noCommand = new NoCommand;
    for (int i = 0; i < 7; i++)
    {
        onCommands[i] = noCommand;
        offCommands[i] = noCommand;
    }
    undoCommand = noCommand;
}

RemoteControlWithUndo::~RemoteControlWithUndo()
{
    //dtor
}


void RemoteControlWithUndo::setCommand(int slot, Command * onCommand, Command * offCommand)
{
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControlWithUndo::onButtonWasPushed(int slot)
{
    onCommands[slot]->execute();
    undoCommand = onCommands[slot];
}

void RemoteControlWithUndo::offButtonWasPushed(int slot)
{
    offCommands[slot]->execute();
    undoCommand = offCommands[slot];
}

void RemoteControlWithUndo::undoButtonWasPushed()
{
    undoCommand->undo();
}

string RemoteControlWithUndo::toString()
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
