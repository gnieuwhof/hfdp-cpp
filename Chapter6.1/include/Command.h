#ifndef COMMAND_H
#define COMMAND_H


class Command
{
    public:
        Command();
        virtual ~Command();

        virtual void execute(){};

    protected:

    private:
};

#endif // COMMAND_H
