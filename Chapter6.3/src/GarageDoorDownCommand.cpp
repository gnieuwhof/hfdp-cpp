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

void GarageDoorDownCommand::undo()
{
    garageDoor->up();
}

string GarageDoorDownCommand::toString()
{
    return "GarageDoorDownCommand";
}
