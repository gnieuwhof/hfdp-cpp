#ifndef HOTTUB_H
#define HOTTUB_H


class Hottub
{
    public:
        Hottub();
        virtual ~Hottub();

        void on();
        void off();
        void circulate();
        void jetsOn();
        void jetsOff();
        void setTemperature(int temperature);

    protected:
        bool isOn;
        int temperature;

    private:
};

#endif // HOTTUB_H
