#include <iostream>
using namespace std;

int main()
{
    // case 1 : Static allocation
    while (true)
    {
        int i = 5;
    } // memory releases of i variable here and again loop goes inside and occupies int space
    // means at a time only 1 block would be used

    // case 2 : Dynamic allocation
    while (true)
    {
        int *ptr = new int; // everytime a new memory is allocated in heap
        // int *ptr of stack  will be released everytime when loop ends below
        // but new int will keep onn making new int blocks in heap
    }

    // for releasing heap memory use `delete` keyword
    // delete i;
    // delete ptr;
    // delete[] arr;
}