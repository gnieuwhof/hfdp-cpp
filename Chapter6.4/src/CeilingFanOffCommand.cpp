#include "CeilingFanOffCommand.h"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan * ceilingFan)
{
    this->ceilingFan = ceilingFan;
}

CeilingFanOffCommand::~CeilingFanOffCommand()
{
    //dtor
}


void CeilingFanOffCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->off();
}

void CeilingFanOffCommand::undo()
{
    if (prevSpeed == CeilingFan::HIGH)
    {
        ceilingFan->high();
    }
    else if (prevSpeed == CeilingFan::MEDIUM)
    {
        ceilingFan->medium();
    }
    else if (prevSpeed == CeilingFan::LOW)
    {
        ceilingFan->low();
    }
    else if (prevSpeed == CeilingFan::OFF)
    {
        ceilingFan->off();
    }
}

std::string CeilingFanOffCommand::toString()
{
    return "CeilingFanOffCommand";
}
