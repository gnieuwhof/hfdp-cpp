#include "GarageDoorUpCommand.h"

GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor * garageDoor)
{
    this->garageDoor = garageDoor;
}

GarageDoorUpCommand::~GarageDoorUpCommand()
{
    //dtor
}


void GarageDoorUpCommand::execute()
{
    garageDoor->up();
}

std::string GarageDoorUpCommand::toString()
{
    return "GarageDoorUpCommand";
}
