#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H

#include <string>

using namespace std;

class GarageDoor
{
    public:
        GarageDoor(string location);
        virtual ~GarageDoor();

        void up();
        void down();
        void stop();
        void lightOn();
        void lightOff();

    protected:
        string location;

    private:
};

#endif // GARAGEDOOR_H
