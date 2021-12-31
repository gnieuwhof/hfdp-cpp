#ifndef STEREOONCOMMAND_H
#define STEREOONCOMMAND_H

#include "Command.h"
#include "Stereo.h"

#include <string>

class StereoOnCommand: public Command
{
    public:
        StereoOnCommand(Stereo * stereo);
        virtual ~StereoOnCommand();

        void execute();
        void undo();
        std::string toString();

    protected:

    private:
        Stereo * stereo;
};

#endif // STEREOONCOMMAND_H
