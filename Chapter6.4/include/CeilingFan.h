#ifndef CEILINGFAN_H
#define CEILINGFAN_H

#include <string>

using namespace std;

class CeilingFan
{
    public:
        CeilingFan(string location);
        virtual ~CeilingFan();

        static const int HIGH = 3;
        static const int MEDIUM = 2;
        static const int LOW = 1;
        static const int OFF = 0;

        void high();
        void medium();
        void low();
        void off();
        int getSpeed();

    protected:
        string location;
        int speed;

    private:
};

#endif // CEILINGFAN_H
