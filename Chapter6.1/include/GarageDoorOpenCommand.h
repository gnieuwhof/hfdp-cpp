#ifndef GARAGEDOOROPENCOMMAND_H
#define GARAGEDOOROPENCOMMAND_H

#include "Command.h"
#include "GarageDoor.h"

class GarageDoorOpenCommand: public Command
{
    public:
        GarageDoorOpenCommand(GarageDoor * garageDoor);
        virtual ~GarageDoorOpenCommand();

        void execute();

    protected:

    private:
        GarageDoor * garageDoor;
};

#endif // GARAGEDOOROPENCOMMAND_H
