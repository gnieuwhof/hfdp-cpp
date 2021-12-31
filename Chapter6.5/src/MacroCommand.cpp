#include "MacroCommand.h"

MacroCommand::MacroCommand(Command** commands, int numberOfCommands)
{
    this->commands = commands;
    this->numberOfCommands = numberOfCommands;
}

MacroCommand::~MacroCommand()
{
    //dtor
}


void MacroCommand::execute()
{
    for (int i = 0; i < numberOfCommands; i++)
    {
        commands[i]->execute();
    }
}

std::string MacroCommand::toString()
{
    return "MacroCommand";
}
