#include "TVOnCommand.h"

TVOnCommand::TVOnCommand(TV * tv)
{
    this->tv = tv;
}

TVOnCommand::~TVOnCommand()
{
    //dtor
}


void TVOnCommand::execute()
{
    tv->on();
    tv->setChannel(3);
}

void TVOnCommand::undo()
{
    tv->off();
}

string TVOnCommand::toString()
{
    return "TVOnCommand";
}
