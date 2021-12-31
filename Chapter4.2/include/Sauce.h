#ifndef SAUCE_H
#define SAUCE_H

#include <string>

class Sauce
{
    public:
        Sauce();
        virtual ~Sauce();

        virtual std::string toString() = 0;

    protected:

    private:
};

#endif // SAUCE_H
