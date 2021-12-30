#ifndef COMMAND_H
#define COMMAND_H

#include <string>

using namespace std;

class Command
{
    public:
        Command();
        virtual ~Command();

        virtual void execute(){};
        virtual void undo(){};
        virtual string toString() = 0;

    protected:

    private:
};

#endif // COMMAND_H
