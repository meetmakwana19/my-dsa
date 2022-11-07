#include <iostream>
using namespace std;
#include "Heroine.cpp"

int main()
{
    Heroine alia(10, 'C');
    cout << "\nalia : \n";
    alia.print();

    // copy constructor is called.
    // a copy constructor is built by default upon creation of the class.
    Heroine kalia(alia);
    // meaning is this :
    // kalia.health = alia.health
    // kalia.level = alia.level
    cout << "\nkalia : \n";
    kalia.print();
}