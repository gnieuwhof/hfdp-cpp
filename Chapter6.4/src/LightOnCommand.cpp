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

void LightOnCommand::undo()
{
    light->off();
}

string LightOnCommand::toString()
{
    return "LightOnCommand";
}
