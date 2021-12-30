#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include "Command.h"
#include "Light.h"

#include <string>

using namespace std;

class LightOffCommand: public Command
{
    public:
        LightOffCommand(Light * light);
        virtual ~LightOffCommand();

        void execute();
        void undo();
        string toString();

    protected:

    private:
        Light * light;
};

#endif // LIGHTOFFCOMMAND_H
