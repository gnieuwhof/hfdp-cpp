#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "Command.h"
#include "Light.h"

#include <string>

using namespace std;

class LightOnCommand: public Command
{
    public:
        LightOnCommand(Light * light);
        virtual ~LightOnCommand();

        void execute();
        void undo();
        string toString();

    protected:

    private:
        Light * light;
};

#endif // LIGHTONCOMMAND_H
