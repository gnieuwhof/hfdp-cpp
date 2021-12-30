#ifndef STEREO_H
#define STEREO_H

#include <string>

using namespace std;

class Stereo
{
    public:
        Stereo(string location);
        virtual ~Stereo();

        void on();
        void off();
        void setCD();
        void setDvd();
        void setRadio();
        void setVolume(int level);

    protected:
        string location;

    private:
};

#endif // STEREO_H
