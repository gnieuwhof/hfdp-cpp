#ifndef HOTTUBOFFCOMMAND_H
#define HOTTUBOFFCOMMAND_H

#include "Command.h"
#include "Hottub.h"

#include <string>

using namespace std;

class HottubOffCommand: public Command
{
    public:
        HottubOffCommand(Hottub * hottub);
        virtual ~HottubOffCommand();

        void execute();
        void undo();
        string toString();

    protected:

    private:
        Hottub * hottub;
};

#endif // HOTTUBOFFCOMMAND_H
