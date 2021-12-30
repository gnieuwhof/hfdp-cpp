#ifndef TV_H
#define TV_H

#include <string>

using namespace std;

class TV
{
    public:
        TV();
        virtual ~TV();

                TV(string location);
        void on();
        void off();
        void setChannel(int channel);

    protected:
        string location;
        int channel;

    private:
};

#endif // TV_H
