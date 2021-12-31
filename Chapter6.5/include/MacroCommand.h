#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include "Command.h"

#include <string>

class MacroCommand: public Command
{
    public:
        MacroCommand(Command** commands, int numberOfCommands);
        virtual ~MacroCommand();

        void execute();
        std::string toString();

    protected:

    private:
        Command** commands;
        int numberOfCommands;
};

#endif // MACROCOMMAND_H
