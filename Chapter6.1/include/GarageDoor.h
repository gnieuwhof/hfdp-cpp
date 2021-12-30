#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H


class GarageDoor
{
    public:
        GarageDoor();
        virtual ~GarageDoor();

        void up();
        void down();
        void stop();
        void lightOn();
        void lightOff();

    protected:

    private:
};

#endif // GARAGEDOOR_H
