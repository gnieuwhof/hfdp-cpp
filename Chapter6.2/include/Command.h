#ifndef COMMAND_H
#define COMMAND_H

#include <string>

class Command
{
    public:
        Command();
        virtual ~Command();

        virtual void execute(){};
        virtual std::string toString() = 0;

    protected:

    private:
};

#endif // COMMAND_H
