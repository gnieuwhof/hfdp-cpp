#ifndef GARAGEDOORUPCOMMAND_H
#define GARAGEDOORUPCOMMAND_H

#include "Command.h"
#include "GarageDoor.h"
#include "GarageDoorUpCommand.h"

#include <string>

class GarageDoorUpCommand: public Command
{
    public:
        GarageDoorUpCommand(GarageDoor * garageDoor);
        virtual ~GarageDoorUpCommand();

        void execute();
        std::string toString();

    protected:

    private:
        GarageDoor * garageDoor;
};

#endif // GARAGEDOORUPCOMMAND_H
