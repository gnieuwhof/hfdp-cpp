#ifndef CEILINGFANMEDIUMCOMMAND_H
#define CEILINGFANMEDIUMCOMMAND_H

#include "Command.h"
#include "CeilingFan.h"

#include <string>

class CeilingFanMediumCommand: public Command
{
    public:
        CeilingFanMediumCommand(CeilingFan * ceilingFan);
        virtual ~CeilingFanMediumCommand();

        void execute();
        void undo();
        std::string toString();

    protected:
        CeilingFan * ceilingFan;
        int prevSpeed;

    private:
};

#endif // CEILINGFANMEDIUMCOMMAND_H
