#include "HottubOffCommand.h"

HottubOffCommand::HottubOffCommand(Hottub * hottub)
{
    this->hottub = hottub;
}

HottubOffCommand::~HottubOffCommand()
{
    //dtor
}


void HottubOffCommand::execute()
{
    hottub->off();
    hottub->setTemperature(98);
}

void HottubOffCommand::undo()
{
    hottub->on();
    hottub->setTemperature(104);
    hottub->circulate();
}

string HottubOffCommand::toString()
{
    return "HottubOffCommand";
}
