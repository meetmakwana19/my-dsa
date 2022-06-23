#include <iostream>
using namespace std;

void update(int a) // passed by value makes a new copy for this new function in the memory.
{
    a = a / 2;
}
int main()
{
    int a = 10;
    update(a);

    // the value of `a` wont change by the update() as update() is updating the value by using the value passed by it and not changing OG variable
    cout << a;
}