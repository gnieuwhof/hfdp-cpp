#ifndef SIMPLEREMOTECONTROL_H
#define SIMPLEREMOTECONTROL_H

#include "Command.h"

class SimpleRemoteControl
{
    public:
        SimpleRemoteControl();
        virtual ~SimpleRemoteControl();

        void setCommand(Command * command);
        void buttonWasPressed();

    protected:

    private:
        Command * slot;
};

#endif // SIMPLEREMOTECONTROL_H
