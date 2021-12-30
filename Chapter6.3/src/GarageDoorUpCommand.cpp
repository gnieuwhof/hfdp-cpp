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

void GarageDoorUpCommand::undo()
{
    garageDoor->down();
}

string GarageDoorUpCommand::toString()
{
    return "GarageDoorUpCommand";
}
