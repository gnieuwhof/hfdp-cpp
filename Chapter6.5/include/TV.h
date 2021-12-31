#ifndef TV_H
#define TV_H

#include <string>

class TV
{
    public:
        TV(std::string location);
        virtual ~TV();

        void on();
        void off();
        void setChannel(int channel);

    protected:
        std::string location;
        int channel;

    private:
};

#endif // TV_H
