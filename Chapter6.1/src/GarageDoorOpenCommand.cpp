#include "GarageDoorOpenCommand.h"

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor * garageDoor)
{
    this->garageDoor = garageDoor;
}

GarageDoorOpenCommand::~GarageDoorOpenCommand()
{
    //dtor
}


void GarageDoorOpenCommand::execute()
{
    garageDoor->up();
}
