#ifndef CEILINGFANMEDIUMCOMMAND_H
#define CEILINGFANMEDIUMCOMMAND_H

#include "Command.h"
#include "CeilingFan.h"

class CeilingFanMediumCommand: public Command
{
    public:
        CeilingFanMediumCommand(CeilingFan * ceilingFan);
        virtual ~CeilingFanMediumCommand();

        void execute();
        void undo();
        string toString();

    protected:
        CeilingFan * ceilingFan;
        int prevSpeed;

    private:
};

#endif // CEILINGFANMEDIUMCOMMAND_H
