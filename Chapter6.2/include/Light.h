#ifndef LIGHT_H
#define LIGHT_H

#include <string>
#include <iostream>

class Light
{
    public:
        Light(std::string location);
        virtual ~Light();

        void on();
        void off();

    protected:
        std::string location;

    private:
};

#endif // LIGHT_H
