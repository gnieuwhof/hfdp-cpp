#ifndef STEREO_H
#define STEREO_H

#include <string>

class Stereo
{
    public:
        Stereo(std::string location);
        virtual ~Stereo();

        void on();
        void off();
        void setCD();
        void setDvd();
        void setRadio();
        void setVolume(int level);

    protected:
        std::string location;

    private:
};

#endif // STEREO_H
