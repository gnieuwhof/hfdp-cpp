#include "GarageDoorDownCommand.h"

GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor * garageDoor)
{
    this->garageDoor = garageDoor;
}

GarageDoorDownCommand::~GarageDoorDownCommand()
{
    //dtor
}


void GarageDoorDownCommand::execute()
{
    garageDoor->down();
}

std::string GarageDoorDownCommand::toString()
{
    return "GarageDoorDownCommand";
}
