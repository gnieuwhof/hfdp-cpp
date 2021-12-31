#ifndef NOCOMMAND_H
#define NOCOMMAND_H

#include "Command.h"

#include <string>

class NoCommand: public Command
{
    public:
        NoCommand();
        virtual ~NoCommand();

        void execute(){}
        std::string toString();

    protected:

    private:
};

#endif // NOCOMMAND_H
