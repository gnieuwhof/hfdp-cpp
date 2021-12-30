#ifndef STEREOOFFCOMMAND_H
#define STEREOOFFCOMMAND_H

#include "Command.h"
#include "Stereo.h"

#include <string>

class StereoOffCommand: public Command
{
    public:
        StereoOffCommand(Stereo * stereo);
        virtual ~StereoOffCommand();

        void execute();
        string toString();

    protected:

    private:
        Stereo * stereo;
};

#endif // STEREOOFFCOMMAND_H
