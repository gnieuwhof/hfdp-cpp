#ifndef TVONCOMMAND_H
#define TVONCOMMAND_H

#include "Command.h"
#include "TV.h"

#include <string>

using namespace std;

class TVOnCommand: public Command
{
    public:
        TVOnCommand();
        virtual ~TVOnCommand();

                TVOnCommand(TV * tv);
        void execute();
        void undo();
        string toString();

    protected:

    private:
        TV * tv;
};

#endif // TVONCOMMAND_H
