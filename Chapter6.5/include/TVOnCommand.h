#ifndef TVONCOMMAND_H
#define TVONCOMMAND_H

#include "Command.h"
#include "TV.h"

#include <string>

class TVOnCommand: public Command
{
    public:
        TVOnCommand(TV * tv);
        virtual ~TVOnCommand();

        void execute();
        void undo();
        std::string toString();

    protected:

    private:
        TV * tv;
};

#endif // TVONCOMMAND_H
