#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Animal is speaking" << endl;
    }
};
class Dog
{
public:
    // this function will run for Dog object only if this is explicitly defined otherwise the obove inherited one will only be running
    void speak()
    {
        cout << "NO ! I will bark bow bow" << endl;
    }
};
int main()
{
    Dog d;
    d.speak();
}