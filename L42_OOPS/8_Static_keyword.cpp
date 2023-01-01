#include <iostream>
#include "Heroine.cpp"
using namespace std;

int main()
{
    // Using static members of the class without creating any object
    cout << Heroine::time << endl;

    // but this is not recommended to use the static members as there is no need to create an object class. Static members belongs to class and not to object
    Heroine a;
    a.Heroine::time = 10;
    cout << a.Heroine::time << endl;
}