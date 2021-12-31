#ifndef CLAMS_H
#define CLAMS_H

#include <string>

class Clams
{
    public:
        Clams();
        virtual ~Clams();

        virtual std::string toString() = 0;

    protected:

    private:
};

#endif // CLAMS_H
