#include <iostream>
#include <limits>
#include <string>
#include <list>

using namespace std;

class Dough
{
    public:
        virtual string toString() = 0;
};

class ThinCrustDough: public Dough
{
    public:
        string toString()
        {
            return "Thin Crust Dough";
        }
};

class Sauce
{
    public:
        virtual string toString() = 0;
};

class MarinaraSauce: public Sauce
{
    public:
        string toString()
        {
            return "Marinara Sauce";
        }
};

class Veggies
{
    public:
        virtual string toString() = 0;
};

class Garlic: public Veggies
{
    public:
        string toString()
        {
            return "Garlic";
        }
};

class Onion: public Veggies
{
    public:
        string toString()
        {
            return "Onion";
        }
};

class Mushroom: public Veggies
{
    public:
        string toString()
        {
            return "Mushroom";
        }
};

class RedPepper: public Veggies
{
    public:
        string toString()
        {
            return "Red Pepper";
        }
};

class Cheese
{
    public:
        virtual string toString() = 0;
};

class ReggianoCheese: public Cheese
{
    public:
        string toString()
        {
            return "ReggianoCheese";
        }
};

class Pepperoni
{
    public:
        virtual string toString() = 0;
};

class SlicedPepperoni: public Pepperoni
{
    public:
        string toString()
        {
            return "Sliced Pepperoni";
        }
};

class Clams
{
    public:
        virtual string toString() = 0;
};

class FreshClams: public Clams
{
    public:
        string toString()
        {
            return "Fresh Clams";
        }
};

class Pizza
{
    protected:
        string name;
        Dough * dough;
        Sauce * sauce;
        list<Veggies *> veggies;
        Cheese * cheese;
        Pepperoni * pepperoni;
        Clams * clam;

    public:
        virtual void prepare(){}

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

        void setName(string name)
        {
            this->name = name;
        }

        string getName()
        {
            return name;
        }

        string toString()
        {
            string result = name;
            result.append("\n");
            result.append(dough->toString());
            result.append("\n");
            result.append(sauce->toString());
            result.append("\n");
            result.append(cheese->toString());
            result.append("\n");
            for (list<Veggies *>::iterator i = veggies.begin();
                i != veggies.end(); i++)
            {
                result.append((*i)->toString());
                result.append("\n");
            }
            return result;
        }
};

class PizzaIngredientFactory
{
    public:
        virtual Dough * createDough() = 0;
        virtual Sauce * createSauce() = 0;
        virtual Cheese * createCheese() = 0;
        virtual list<Veggies *> createVeggies() = 0;
        virtual Pepperoni * createPepperoni() = 0;
        virtual Clams * createClam() = 0;
};

class NYPizzaIngredientFactory: public PizzaIngredientFactory
{
    public:
        Dough * createDough()
        {
            return new ThinCrustDough;
        }

        Sauce * createSauce()
        {
            return new MarinaraSauce;
        }

        Cheese * createCheese()
        {
            return new ReggianoCheese;
        }

        list<Veggies *> createVeggies()
        {
            list<Veggies *> veggies;
            veggies.push_back(new Garlic);
            veggies.push_back(new Onion);
            veggies.push_back(new Mushroom);
            veggies.push_back(new RedPepper);
            return veggies;
        }

        Pepperoni * createPepperoni()
        {
            return new SlicedPepperoni;
        }

        Clams * createClam()
        {
            return new FreshClams;
        }
};

class CheesePizza: public Pizza
{
    protected:
        PizzaIngredientFactory * ingredientFactory;

    public:
        CheesePizza(PizzaIngredientFactory * ingredientFactory)
        {
            this->ingredientFactory = ingredientFactory;
        }

        void prepare()
        {
            cout << "Preparing " << name << endl;
            dough = ingredientFactory->createDough();
            sauce = ingredientFactory->createSauce();
            cheese = ingredientFactory->createCheese();
            veggies = ingredientFactory->createVeggies();
        }
};

class PizzaStore
{
    protected:
        virtual Pizza * createPizza(string item) = 0;

    public:
        Pizza * orderPizza(string type)
        {
            Pizza * pizza = createPizza(type);

            cout << "--- Making a " << pizza->getName() << " ---" << endl;

            pizza->prepare();
            pizza->bake();
            pizza->cut();
            pizza->box();

            return pizza;
        }
};

class NYPizzaStore: public PizzaStore
{
    protected:
        Pizza * createPizza(string item)
        {
            Pizza * pizza = 0;
            PizzaIngredientFactory * ingredientFactory =
                new NYPizzaIngredientFactory;

            if (item == "cheese"){
                pizza = new CheesePizza(ingredientFactory);
                pizza->setName("New York Style Cheese Pizza");
            } else if (item == "veggie"){
//                return new NYStyleVeggiePizza;
            } else if (item == "clam"){
//                return new NYStyleClamPizza;
            } else if (item == "pepperoni"){
//                return new NYStylePepperoniPizza;
            }
            return pizza;
        }
};

int main()
{
    PizzaStore * nyStore = new NYPizzaStore;
//    PizzaStore * chicagoStore = new PizzaStore(new ChicagoPizzaStore);

    Pizza * pizza = nyStore->orderPizza("cheese");
    cout << "Ethan ordered a " << pizza->toString() << endl << endl;

//    pizza = chicagoStore->orderPizza("cheese");
//    cout << "Joel ordered a " << pizza->getName() << endl;

    delete pizza;
    return 0;
}
