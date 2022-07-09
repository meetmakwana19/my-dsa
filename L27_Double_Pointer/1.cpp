#include <iostream>
using namespace std;

int main()
{
    // Multi level pointers

    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << i << endl
         << endl;
    cout << ptr << endl;
    cout << *ptr << endl
         << endl;
    cout << ptr2 << endl;
    cout << **ptr2 << endl
         << endl;
}