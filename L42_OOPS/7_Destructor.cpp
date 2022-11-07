#include <iostream>
#include "Heroine.cpp"
using namespace std;

int main()
{
    // static
    Heroine a;
    // destructor gets called automatically for static

    // dynamic
    Heroine *b = new Heroine();
    // destructor doesnt gets called automatically for static. Need to do it manually.
    delete b;

} // destructor gets called for object alia before the function ends here