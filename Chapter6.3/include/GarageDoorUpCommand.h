#ifndef GARAGEDOORUPCOMMAND_H
#define GARAGEDOORUPCOMMAND_H

#include "Command.h"
#include "GarageDoor.h"

#include <string>

using namespace std;

class GarageDoorUpCommand: public Command
{
    public:
        GarageDoorUpCommand(GarageDoor * garageDoor);
        virtual ~GarageDoorUpCommand();

        void execute();
        void undo();
        string toString();

    protected:

    private:
        GarageDoor * garageDoor;
};

#endif // GARAGEDOORUPCOMMAND_H
