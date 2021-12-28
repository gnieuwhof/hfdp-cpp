#include <iostream>
#include <limits>
#include <string>
#include <list>

using namespace std;

class Pizza
{
    protected:
        string name;
        string dough;
        string sauce;
        list<string> toppings;

    public:
        void prepare()
        {
            cout << "Preparing " << name << endl;
            cout << "Tossing dough..." << endl;
            cout << "Adding suace..." << endl;
            cout << "Adding toppings: " << endl;
            for(list<string>::iterator i = toppings.begin();
                i != toppings.end(); i++)
            {
                cout << "    " << *i << endl;
            }

        }

        void bake()
        {
            cout << "Bake for 25 minutes at 350" << endl;
        }

        virtual void cut()
        {
            cout << "Cutting the pizza into diagonal slices" << endl;
        }

        void box()
        {
            cout << "Place pizza into official PizzaStore box" << endl;
        }

        string getName()
        {
            return name;
        }
};

class CheesePizza: public Pizza
{
    public:
        CheesePizza()
        {
            name = "Cheese Pizza";
            dough = "Regular Crust";
            sauce = "Marinara Pizza Sauce";
            toppings.push_back("Fresh Mozzarella");
            toppings.push_back("Parmesan");
        }
};

class NYStyleCheesePizza: public Pizza
{
    public:
        NYStyleCheesePizza()
        {
            name = "NY Style Sauce and Cheese Pizza";
            dough = "Thin Crust Dough";
            sauce = "Marinara Sauce";
            toppings.push_back("Grated Reggiano Cheese");
        }
};

class ChicagoStyleCheesePizza: public Pizza
{
    public:
        ChicagoStyleCheesePizza()
        {
            name = "Chicago Style Deep Dish Cheese Pizza";
            dough = "Extra Thick Crust Dough";
            sauce = "Plum Tomato Sauce";

            toppings.push_back("Shredded Mozzarella Cheese");
        }

        void cut()
        {
            cout << "Cutting the pizza into square slices" << endl;
        }
};

class SimplePizzaFactory
{
    public:
        virtual Pizza * createPizza(string type)
        {
            Pizza * pizza;

            if (type == "cheese"){
                pizza = new CheesePizza;
            } else if (type == "pepperoni"){
                //pizza = new PepperoniPizza;
            } else if (type == "clam"){
                //pizza = new ClamPizza;
            } else if (type == "veggie"){
                //pizza = new VeggiePizza;
            }
            return pizza;
        }
};

class PizzaStore
{
    protected:
        SimplePizzaFactory * factory;

    public:
        PizzaStore(SimplePizzaFactory * factory)
        {
            this->factory = factory;
        }

        Pizza * orderPizza(string type)
        {
            Pizza * pizza;

            pizza = factory->createPizza(type);

            pizza->prepare();
            pizza->bake();
            pizza->cut();
            pizza->box();

            return pizza;
        }
};

class NYPizzaStore: public SimplePizzaFactory
{
    public:
        Pizza * createPizza(string item)
        {
            if (item == "cheese"){
                return new NYStyleCheesePizza;
            } else if (item == "veggie"){
//                return new NYStyleVeggiePizza;
            } else if (item == "clam"){
//                return new NYStyleClamPizza;
            } else if (item == "pepperoni"){
//                return new NYStylePepperoniPizza;
            }
            return 0;
        }
};

class ChicagoPizzaStore: public SimplePizzaFactory
{
    public:
        Pizza * createPizza(string item)
        {
            if (item == "cheese"){
                return new ChicagoStyleCheesePizza;
            } else if (item == "veggie"){
//                return new ChicagoStyleVeggiePizza;
            } else if (item == "clam"){
//                return new ChicagoStyleClamPizza;
            } else if (item == "pepperoni"){
//                return new ChicagoStylePepperoniPizza;
            }
            return 0;
        }
};

int main()
{
    PizzaStore * nyStore = new PizzaStore(new NYPizzaStore);
    PizzaStore * chicagoStore = new PizzaStore(new ChicagoPizzaStore);

    Pizza * pizza = nyStore->orderPizza("cheese");
    cout << "Ethan ordered a " << pizza->getName() << endl << endl;

    pizza = chicagoStore->orderPizza("cheese");
    cout << "Joel ordered a " << pizza->getName() << endl;

    delete pizza;
    return 0;
}
