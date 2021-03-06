#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "Command.h"
#include "Light.h"

class LightOnCommand: public Command
{
    public:
        LightOnCommand(Light * light);
        virtual ~LightOnCommand();

        void execute();

    protected:

    private:
        Light * light;
};

#endif // LIGHTONCOMMAND_H
