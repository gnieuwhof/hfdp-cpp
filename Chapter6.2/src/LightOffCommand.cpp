#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light * light)
{
    this->light = light;
}

LightOffCommand::~LightOffCommand()
{
    //dtor
}


void LightOffCommand::execute()
{
    light->off();
}

string LightOffCommand::toString()
{
    return "LightOffCommand";
}
