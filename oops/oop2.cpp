// abstraction

#include <bits/stdc++.h>

using namespace std;

// abstract class
class Tea
{
public:
    // pure virtual functions
    virtual void prepareIngredients() = 0;
    virtual void brew() = 0;
    virtual void serve() = 0;

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

// derived class

class GreeenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green leaves and water is ready " << endl;
    }

    void brew() override
    {
        cout << "Green tea brewed " << endl;
    }

    void serve() override
    {
        cout << "Green tea served " << endl;
    }
};

class MasalaTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Masala leaves and water is ready " << endl;
    }

    void brew() override
    {
        cout << "Masala tea brewed " << endl;
    }

    void serve() override
    {
        cout << "Masala tea served " << endl;
    }
};

int main()
{
    GreeenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();

    return 0;
}