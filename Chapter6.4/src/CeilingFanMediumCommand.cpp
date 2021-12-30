#include "CeilingFanMediumCommand.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan * ceilingFan)
{
    this->ceilingFan = ceilingFan;
}

CeilingFanMediumCommand::~CeilingFanMediumCommand()
{
    //dtor
}


void CeilingFanMediumCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->medium();
}

void CeilingFanMediumCommand::undo()
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

string CeilingFanMediumCommand::toString()
{
    return "CeilingFanMediumCommand";
}
