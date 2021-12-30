#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light * light)
{
    this->light = light;
}

LightOnCommand::~LightOnCommand()
{
    //dtor
}


void LightOnCommand::execute()
{
    light->on();
}
