#include "TVOffCommand.h"

TVOffCommand::TVOffCommand(TV * tv)
{
    this->tv = tv;
}

TVOffCommand::~TVOffCommand()
{
    //dtor
}


void TVOffCommand::execute()
{
    tv->off();
}

void TVOffCommand::undo()
{
    tv->off();
}

string TVOffCommand::toString()
{
    return "TVOffCommand";
}
