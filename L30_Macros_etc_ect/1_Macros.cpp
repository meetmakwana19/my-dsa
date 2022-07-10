#include <iostream>
using namespace std;

// macro definition
#define PI 3.14

int main()
{
    int r = 5;
    // PI++; macros are not changeable
    cout << "Area is " << PI * r * r << endl;
}