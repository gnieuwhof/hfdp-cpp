#include "StereoOffCommand.h"

StereoOffCommand::StereoOffCommand(Stereo * stereo)
{
    this->stereo = stereo;
}

StereoOffCommand::~StereoOffCommand()
{
    //dtor
}


void StereoOffCommand::execute()
{
    stereo->off();
}

void StereoOffCommand::undo()
{
    stereo->on();
    stereo->setCD();
    stereo->setVolume(11);
}

std::string StereoOffCommand::toString()
{
    return "StereoOffCommand";
}
