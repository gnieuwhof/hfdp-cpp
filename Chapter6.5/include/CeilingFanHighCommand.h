#ifndef CEILINGFANHIGHCOMMAND_H
#define CEILINGFANHIGHCOMMAND_H

#include "Command.h"
#include "CeilingFan.h"

#include <string>

class CeilingFanHighCommand: public Command
{
    public:
        CeilingFanHighCommand(CeilingFan * ceilingFan);
        virtual ~CeilingFanHighCommand();

        void execute();
        void undo();
        std::string toString();

    protected:
        CeilingFan * ceilingFan;
        int prevSpeed;

    private:
};

#endif // CEILINGFANHIGHCOMMAND_H
