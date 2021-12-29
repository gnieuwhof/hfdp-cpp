#ifndef CHOCOLATEBOILER_H
#define CHOCOLATEBOILER_H


class ChocolateBoiler
{
    public:
        virtual ~ChocolateBoiler();

        static ChocolateBoiler * getInstance();
        static void dispose(); // Use with Eager Singleton
        bool isEmpty();
        bool isBoiled();
        void fill();
        void drain();
        void boil();

    protected:

    private:
        bool empty;
        bool boiled;

        static ChocolateBoiler * uniqueInstance;
//        static int instances; // Lazy Singleton

        ChocolateBoiler();
};

#endif // CHOCOLATEBOILER_H
