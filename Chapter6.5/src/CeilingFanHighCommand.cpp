#include "CeilingFanHighCommand.h"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan * ceilingFan)
{
    this->ceilingFan = ceilingFan;
}

CeilingFanHighCommand::~CeilingFanHighCommand()
{
    //dtor
}


void CeilingFanHighCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->high();
}

void CeilingFanHighCommand::undo()
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

string CeilingFanHighCommand::toString()
{
    return "CeilingFanHighCommand";
}
