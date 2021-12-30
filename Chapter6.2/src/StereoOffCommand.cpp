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

string StereoOffCommand::toString()
{
    return "StereoOffCommand";
}
