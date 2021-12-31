#ifndef VEGGIES_H
#define VEGGIES_H

#include <string>

class Veggies
{
    public:
        Veggies();
        virtual ~Veggies();

        virtual std::string toString() = 0;;

    protected:

    private:
};

#endif // VEGGIES_H
