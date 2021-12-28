#include <iostream>
#include <limits>

using namespace std;

class ChocolateBoiler
{
    private:
        bool empty;
        bool boiled;

        static ChocolateBoiler * uniqueInstance;
//        static int instances; // Lazy Singleton

        ChocolateBoiler()
        {
            empty = true;
            boiled = false;
        }

    public:
        static ChocolateBoiler * getInstance()
        {
//            instances++;                                  //
//            if (uniqueInstance == 0)                      //
//            {                                             // Lazy Singleton
//                uniqueInstance = new ChocolateBoiler();   //
//            }                                             //
            return uniqueInstance;
        }
/*
        ~ChocolateBoiler() // Lazy Singleton
        {
            if (instances == 0)
            {
                delete uniqueInstance;
            }
            else instances--;
        }
*/
        static void dispose() // Use with Eager Singleton
        {
            delete uniqueInstance;
        }

        bool isEmpty()
        {
            return empty;
        }

        bool isBoiled()
        {
            return boiled;
        }

        void fill()
        {
            if (isEmpty())
            {
                empty = false;
                boiled = false;
                cout << "Boiler filled." << endl;
            }
            else cout << "Boiler alreaddy filled!" << endl;
        }

        void drain()
        {
            if (!isEmpty() && isBoiled())
            {
                empty = true;
                cout << "Boiler drained." << endl;
            }
            else cout << "Boiler is empty!" << endl;
        }

        void boil()
        {
            if (!isEmpty() && !isBoiled())
            {
                boiled = true;
                cout << "Boiler boiled." << endl;
            }
            else cout << "Boiler is empty or alreaddy boiled!" << endl;
        }
};
// Lazy
//ChocolateBoiler * ChocolateBoiler::uniqueInstance = 0;
//int ChocolateBoiler::instances = 0;
// Eager
ChocolateBoiler * ChocolateBoiler::uniqueInstance = new ChocolateBoiler;


int main()
{
    ChocolateBoiler * chocolateBoiler = ChocolateBoiler::getInstance();
    ChocolateBoiler * chocolateBoiler2 = ChocolateBoiler::getInstance();
    chocolateBoiler->fill();
    chocolateBoiler->boil();
    chocolateBoiler2->fill();
    chocolateBoiler->drain();
    chocolateBoiler2->boil();
    chocolateBoiler2->drain();

    delete chocolateBoiler;
    delete chocolateBoiler2;
    ChocolateBoiler * chocolateBoiler3 = ChocolateBoiler::getInstance();
    ChocolateBoiler * chocolateBoiler4 = ChocolateBoiler::getInstance();
    chocolateBoiler3->fill();
    chocolateBoiler3->boil();
    chocolateBoiler4->fill();
    chocolateBoiler3->drain();
    chocolateBoiler4->boil();
    chocolateBoiler4->drain();

    delete chocolateBoiler3;
    delete chocolateBoiler4;

    ChocolateBoiler::dispose();
    return 0;
}
