#ifndef CEILINGFANOFFCOMMAND_H
#define CEILINGFANOFFCOMMAND_H

#include "Command.h"
#include "CeilingFan.h"

#include <string>

class CeilingFanOffCommand: public Command
{
    public:
        CeilingFanOffCommand(CeilingFan * ceilingFan);
        virtual ~CeilingFanOffCommand();

        void execute();
        void undo();
        std::string toString();

    protected:
        CeilingFan * ceilingFan;
        int prevSpeed;

    private:
};

#endif // CEILINGFANOFFCOMMAND_H
