#ifndef LIGHT_H
#define LIGHT_H

#include <string>
#include <iostream>

using namespace std;

class Light
{
    public:
        Light(string location);
        virtual ~Light();

        void on();
        void off();

    protected:
        string location;

    private:
};

#endif // LIGHT_H
