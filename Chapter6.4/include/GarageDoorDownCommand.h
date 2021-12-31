#ifndef GARAGEDOORDOWNCOMMAND_H
#define GARAGEDOORDOWNCOMMAND_H

#include "Command.h"
#include "GarageDoor.h"

class GarageDoorDownCommand: public Command
{
    public:
        GarageDoorDownCommand(GarageDoor * garageDoor);
        virtual ~GarageDoorDownCommand();

        void execute();
        void undo();
        std::string toString();

    protected:

    private:
        GarageDoor * garageDoor;
};

#endif // GARAGEDOORDOWNCOMMAND_H
