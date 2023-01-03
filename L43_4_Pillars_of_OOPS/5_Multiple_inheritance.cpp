#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void lives()
    {
        cout << "Animal lives" << endl;
    }
};

class Bird
{
public:
    int flight;
    void fly()
    {
        cout << "Bird can fly" << endl;
    }
};

class Hybrid : public Animal,
               public Bird
{
};
main()
{
    Hybrid h;
    h.lives();
    h.fly();
}