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

class Dog : public Animal
{
};

int main()
{
    Dog d;
    d.lives();
}