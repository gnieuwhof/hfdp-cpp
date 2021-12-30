#include "StereoOnWithCDCommand.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo * stereo)
{
    this->stereo = stereo;
}

StereoOnWithCDCommand::~StereoOnWithCDCommand()
{
    //dtor
}


void StereoOnWithCDCommand::execute()
{
    stereo->on();
    stereo->setCD();
    stereo->setVolume(11);
}

void StereoOnWithCDCommand::undo()
{
    stereo->off();
}

string StereoOnWithCDCommand::toString()
{
    return "StereoOnWithCDCommand";
}
