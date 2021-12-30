#ifndef CEILINGFANOFFCOMMAND_H
#define CEILINGFANOFFCOMMAND_H

#include "Command.h"
#include "CeilingFan.h"

#include <string>

using namespace std;

class CeilingFanOffCommand: public Command
{
    public:
        CeilingFanOffCommand();
        virtual ~CeilingFanOffCommand();

                CeilingFanOffCommand(CeilingFan * ceilingFan);
        void execute();
        void undo();
        string toString();

    protected:
        CeilingFan * ceilingFan;
        int prevSpeed;

    private:
};

#endif // CEILINGFANOFFCOMMAND_H
