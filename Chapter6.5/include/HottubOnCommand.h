#ifndef HOTTUBONCOMMAND_H
#define HOTTUBONCOMMAND_H

#include "Command.h"
#include "Hottub.h"

#include <string>

class HottubOnCommand: public Command
{
    public:
        HottubOnCommand(Hottub * hottub);
        virtual ~HottubOnCommand();

        void execute();
        void undo();
        std::string toString();

    protected:

    private:
        Hottub * hottub;
};

#endif // HOTTUBONCOMMAND_H
