#ifndef NOCOMMAND_H
#define NOCOMMAND_H

#include "Command.h"

#include <string>

using namespace std;

class NoCommand: public Command
{
    public:
        NoCommand();
        virtual ~NoCommand();

        void execute(){}
        string toString();

    protected:

    private:
};

#endif // NOCOMMAND_H
