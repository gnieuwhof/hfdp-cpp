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

std::string StereoOffCommand::toString()
{
    return "StereoOffCommand";
}
