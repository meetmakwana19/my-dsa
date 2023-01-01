#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    // Initialization list is way to provide values to the data members of the class
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i + b) // --> this will cause garbage value in a as a is initialized first but b is first.
    Test(int i, int j) : a(i)
    {
        // a = i;
        b = j;
        cout << "Constructor executed" << endl;
        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
}