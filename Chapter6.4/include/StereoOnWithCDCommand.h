#ifndef STEREOONWITHCDCOMMAND_H
#define STEREOONWITHCDCOMMAND_H

#include "Command.h"
#include "Stereo.h"

#include <string>

using namespace std;

class StereoOnWithCDCommand: public Command
{
    public:
        StereoOnWithCDCommand(Stereo * stereo);
        virtual ~StereoOnWithCDCommand();

        void execute();
        void undo();
        string toString();

    protected:

    private:
        Stereo * stereo;
};

#endif // STEREOONWITHCDCOMMAND_H
