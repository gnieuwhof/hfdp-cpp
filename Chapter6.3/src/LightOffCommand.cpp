#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light * light)
{
    this->light = light;
}

LightOffCommand::~LightOffCommand()
{
    //dtor
}


void LightOffCommand::LightOffCommand::execute()
{
    light->off();
}

void LightOffCommand::undo()
{
    light->on();
}

std::string LightOffCommand::toString()
{
    return "LightOffCommand";
}
