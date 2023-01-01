#include <iostream>
using namespace std;
#include "Heroine.cpp"

// defining class
// can keep class definition in diff file too like above included Heroine.cpp
class Hero
{
    // properties
    // char name[100]; // size 100 bytes
    // int health; // size 4 bytes
    // char level; // size 1 byte
};

int main()
{
    // static allocation
    // object h1
    Hero h1;
    // by this, a block of memory is created for h1 instance with garbage values set into the properties since no values r assigned to the properties

    // dynamic allocation into Heap
    Heroine *p = new Heroine; // `Heroine` type pointer `p` storing address of the Heroine class

    Heroine h2;

    // if no properties then size 1 byte for empty class for identification of that object with empty class
    cout << "Size of class h1 is " << sizeof(h1) << endl;
    cout << "Size of class h2 is " << sizeof(h2) << endl;
    cout << endl;
    cout << "Address of class h1 is " << &h1 << endl;
    cout << "Address of class h2 is " << &h2 << endl;

    // cout << "Health is " << h2.health << endl; //can give error as properties of class are by default private.
    cout << "Garbage value of Health of h2 is " << h2.getHealth() << endl;
    // h2.health = 20; // use when the property is defined under public scope otherwise error will come.
    h2.setHealth(10);
    // cout << "Now Health is " << h2.health << endl;
    cout << "Health of h2 after setting it is " << h2.getHealth() << " now " << endl;
    cout << endl;

    // using dynamically allocated class by deferencing the pointer using *
    cout << "Garbage value on Health of p is " << (*p).getHealth() << endl;
    (*p).setHealth(20);
    cout << "Health of p is " << (*p).getHealth() << endl;
    p->setHealth(30);
    cout << "Health of p is " << (*p).getHealth() << " now " << endl;
    cout << endl;
}