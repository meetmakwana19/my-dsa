#include <iostream>
using namespace std;
#include "Heroine.cpp"

int main()
{
    cout << "Hi" << endl;

    // object created statically
    Heroine alia;
    // behind the scene a default constructor is called by default like
    // alia.Heroine()
    // means Heroine() function for object `alia`

    Heroine *p = new Heroine();

    cout << "Hello" << endl;

    cout << "Address of alia is " << &alia;

    Heroine kiara(10);
    cout << "Address of kiara is " << &kiara;
    cout << "\nHealth of kiara is " << kiara.getHealth() << endl;

    Heroine cat(15, 'B');
    cout << "Address of cat is " << &cat;
    cout << "\nHealth of cat is " << cat.getHealth() << endl;
    cout << "Level of cat is " << cat.getLevel() << endl;

    cout << "\nPrint functions :" << endl;
    alia.print();
    kiara.print();
    cat.print();
}