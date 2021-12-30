#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include "Command.h"

#include <string>

using namespace std;

class MacroCommand: public Command
{
    public:
        MacroCommand();
        virtual ~MacroCommand();

                MacroCommand(Command** commands, int numberOfCommands);
        void execute();
        string toString();

    protected:

    private:
        Command** commands;
        int numberOfCommands;
};

#endif // MACROCOMMAND_H
