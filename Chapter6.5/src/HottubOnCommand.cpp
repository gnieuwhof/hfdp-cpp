#include "HottubOnCommand.h"

HottubOnCommand::HottubOnCommand(Hottub * hottub)
{
    this->hottub = hottub;
}

HottubOnCommand::~HottubOnCommand()
{
    //dtor
}


void HottubOnCommand::execute()
{
    hottub->on();
    hottub->setTemperature(104);
    hottub->circulate();
}

void HottubOnCommand::undo()
{
    hottub->off();
    hottub->setTemperature(89);
}

std::string HottubOnCommand::toString()
{
    return "HottubOnCommand";
}
