#include "SimpleRemoteControl.h"

SimpleRemoteControl::SimpleRemoteControl()
{
    //ctor
}

SimpleRemoteControl::~SimpleRemoteControl()
{
    //dtor
}


void SimpleRemoteControl::setCommand(Command * command)
{
    slot = command;
}

void SimpleRemoteControl::buttonWasPressed()
{
    slot->execute();
}
