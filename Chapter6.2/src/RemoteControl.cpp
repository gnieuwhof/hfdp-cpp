#include "RemoteControl.h"
#include "Command.h"
#include "NoCommand.h"

#include <sstream>

using namespace std;

RemoteControl::RemoteControl()
{
    Command * noCommand = new NoCommand;
    for (int i = 0; i < 7; i++)
    {
        onCommands[i] = noCommand;
        offCommands[i] = noCommand;
    }
}

RemoteControl::~RemoteControl()
{
    //dtor
}


void RemoteControl::setCommand(int slot, Command * onCommand, Command * offCommand)
{
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot)
{
    onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot)
{
    offCommands[slot]->execute();
}

string RemoteControl::toString()
{
    stringstream result;
    result << "--- Remote Control ---" << endl;
    //string result = "\n--- Remote Control ---\n";
    for (int i = 0; i < 7; i++)
    {
        result << "[slot " << i << "] ";
        result << onCommands[i]->toString() << "    ";
        result << offCommands[i]->toString() << endl;
        /*
        result.append("[slot ");
        stringstream sstream;
        sstream << i;
        result.append(sstream.str());
        result.append("] ");
        result.append(onCommands[i]->toString());
        result.append("    ");
        result.append(offCommands[i]->toString());
        result.append("\n");
        */
    }
    return result.str();
}
