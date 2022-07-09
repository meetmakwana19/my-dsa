#include <iostream>
using namespace std;

int main()
{
    // A void pointer is a general-purpose pointer that can hold the address of any data type, but it is not associated with any data type.
    // void *ptr;   // void pointer declaration

    int a = 10;
    void *ptr = &a; // void pointer

    // a void pointer canot be dereferenced but the address in stores can be printed
    // error: 'void*' is not a pointer-to-object type
    // cout << *ptr << endl;
    cout << ptr << endl;
}