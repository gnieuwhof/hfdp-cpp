#ifndef CEILINGFANHIGHCOMMAND_H
#define CEILINGFANHIGHCOMMAND_H

#include "Command.h"
#include "CeilingFan.h"

#include <string>

using namespace std;

class CeilingFanHighCommand: public Command
{
    public:
        CeilingFanHighCommand();
        virtual ~CeilingFanHighCommand();

                CeilingFanHighCommand(CeilingFan * ceilingFan);
        void execute();
        void undo();
        string toString();

    protected:
        CeilingFan * ceilingFan;
        int prevSpeed;

    private:
};

#endif // CEILINGFANHIGHCOMMAND_H
