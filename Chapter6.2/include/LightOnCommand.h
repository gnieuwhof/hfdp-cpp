#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "Command.h"
#include "Light.h"

#include <string>

class LightOnCommand: public Command
{
    public:
        LightOnCommand(Light * light);
        virtual ~LightOnCommand();

        void execute();
        std::string toString();

    protected:

    private:
        Light * light;
};

#endif // LIGHTONCOMMAND_H
