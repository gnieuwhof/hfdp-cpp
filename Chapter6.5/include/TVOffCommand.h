#ifndef TVOFFCOMMAND_H
#define TVOFFCOMMAND_H

#include "Command.h"
#include "TV.h"

#include <string>

using namespace std;

class TVOffCommand: public Command
{
    public:
        TVOffCommand(TV * tv);
        virtual ~TVOffCommand();

        void execute();
        void undo();
        string toString();

    protected:

    private:
        TV * tv;
};

#endif // TVOFFCOMMAND_H
