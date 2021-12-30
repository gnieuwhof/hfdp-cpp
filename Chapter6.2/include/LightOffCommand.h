#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include "Command.h"
#include "Light.h"

#include <string>

class LightOffCommand: public Command
{
    public:
        LightOffCommand();
        virtual ~LightOffCommand();

                LightOffCommand(Light * light);
        void execute();
        string toString();

    protected:

    private:
        Light * light;
};

#endif // LIGHTOFFCOMMAND_H
