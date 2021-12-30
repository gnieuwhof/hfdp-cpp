#include "StereoOnCommand.h"

StereoOnCommand::StereoOnCommand(Stereo * stereo)
{
    this->stereo = stereo;
}

StereoOnCommand::~StereoOnCommand()
{
    //dtor
}


void StereoOnCommand::execute()
{
    stereo->on();
    stereo->setCD();
    stereo->setVolume(11);
}

void StereoOnCommand::undo()
{
    stereo->off();
}

string StereoOnCommand::toString()
{
    return "StereoOnCommand";
}
