#include <iostream>
#include "Heroine.cpp"
using namespace std;

int main()
{
    Heroine alia;
    cout << "alia : \n";
    alia.setHealth(100);
    alia.setLevel('D');
    char name[7] = "alia";
    alia.setName(name);
    alia.print();

    cout << "Kalia : \n";
    // using default copy constructor by commenting the written one
    // Heroine kalia(alia);
    Heroine kalia = alia; // another way of defining
    kalia.print();

    cout << endl;
    alia.name[0] = 'b'; // remember name is pointer type in the class definition and changing it will mean going to that location and changing it for everyone accessing name.
    alia.setHealth(50);
    alia.print();
    cout << "kalia's name not changing due to doing deep copy using custom copy constructor\n";
    kalia.print();
}