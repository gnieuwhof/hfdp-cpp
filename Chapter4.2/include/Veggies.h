#ifndef VEGGIES_H
#define VEGGIES_H


#include <string>

using namespace std;

class Veggies
{
    public:
        Veggies();
        virtual ~Veggies();

        virtual string toString() = 0;;

    protected:

    private:
};

#endif // VEGGIES_H
