#include <iostream>
#include <limits>

using namespace std;

class QuackBehavior
{
    public:
        virtual void quack(){};
};

class Quack: public QuackBehavior
{
    public:
        void quack()
        {
            cout << "Quack" << endl;
        }
};

class MuteQuack: public QuackBehavior
{
    public:
        void quack()
        {
            cout << "Silence" << endl;
        }
};

class Squeak: public QuackBehavior
{
    public:
        void quack()
        {
            cout << "Squeak" << endl;
        }
};

class FlyBehavior
{
    public:
        virtual void fly(){};
};

class FlyWithWings: public FlyBehavior
{
    public:
        void fly()
        {
            cout << "I'm flying!" << endl;
        }
};

class FlyNoWay: public FlyBehavior
{
    public:
        void fly()
        {
            cout << "I can't fly" << endl;
        }
};

class FlyRocketPowered: public FlyBehavior
{
    public:
        void fly()
        {
            cout << "I'm flying with a rocket!" << endl;
        }
};

class Duck
{
    protected:
        FlyBehavior * flyBehavior;
        QuackBehavior * quackBehavior;

    public:
        ~Duck()
        {
            delete flyBehavior;
            delete quackBehavior;
        }

        virtual void display(){};

        void performFly()
        {
            flyBehavior->fly();
        }

        void performQuack()
        {
            quackBehavior->quack();
        }

        void swim()
        {
            cout << "All ducks float, even decoys!" << endl;
        }

        void setFlyBehavior(FlyBehavior * fb)
        {
            flyBehavior = fb;
        }

        void setQuackBehavior(QuackBehavior * qb)
        {
            quackBehavior = qb;
        }
};

class MallardDuck: public Duck
{
    public:
        MallardDuck()
        {
            quackBehavior = new Quack;
            flyBehavior = new FlyWithWings;
        }

        void display()
        {
            cout << "I'm a real Mallard duck" << endl;
        }
};

class ModelDuck: public Duck
{
    public:
        ModelDuck()
        {
            flyBehavior = new FlyNoWay;
            quackBehavior = new Quack;
        }

        void display()
        {
            cout << "I'm a model duck" << endl;
        }
};

int main()
{
    Duck * mallard = new MallardDuck;
    mallard->performQuack();
    mallard->performFly();
    delete mallard;

    Duck * model = new ModelDuck;
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered);
    model->performFly();
    delete model;

    return 0;
}
