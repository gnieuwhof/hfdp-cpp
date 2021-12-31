#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H

#include <string>

class GarageDoor
{
    public:
        GarageDoor(std::string location);
        virtual ~GarageDoor();

        void up();
        void down();
        void stop();
        void lightOn();
        void lightOff();

    protected:
        std::string location;

    private:
};

#endif // GARAGEDOOR_H
