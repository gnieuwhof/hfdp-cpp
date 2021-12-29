#ifndef MODELDUCK_H
#define MODELDUCK_H

#include "Duck.h"

class ModelDuck: public Duck
{
    public:
        ModelDuck();
        virtual ~ModelDuck();

        void display();

    protected:

    private:
};

#endif // MODELDUCK_H
