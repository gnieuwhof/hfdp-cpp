#ifndef CLAMS_H
#define CLAMS_H

#include <string>

using namespace std;

class Clams
{
    public:
        Clams();
        virtual ~Clams();

        virtual string toString() = 0;

    protected:

    private:
};

#endif // CLAMS_H
