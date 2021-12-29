#ifndef SAUCE_H
#define SAUCE_H

#include <string>

using namespace std;

class Sauce
{
    public:
        Sauce();
        virtual ~Sauce();

        virtual string toString() = 0;

    protected:

    private:
};

#endif // SAUCE_H
