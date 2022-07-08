#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 10, 6, 4, 5}; // total size = 10 x 4bytes INT = 40bytes

    cout << "Size of arr is " << sizeof(arr) << endl;
    cout << "Size of *arr is " << sizeof(*arr) << endl;
    cout << "Size of &arr is " << sizeof(&arr) << endl;
    int *ptr = &arr[0];
    cout << endl;
    cout << "Size of *ptr is " << sizeof(*ptr) << endl;
    cout << "Size of ptr is " << sizeof(ptr) << endl;
    cout << "Size of &ptr is " << sizeof(&ptr) << endl;

    cout << endl;
    cout << "ptr is " << ptr << " i.e. address of arr" << arr << endl;
    cout << "*ptr(value at) is " << *ptr << endl;
    cout << "&ptr(Address of ptr) is " << &ptr << endl;

    // Content of symbol table cannot be changed
    // i.e when arr[10] is created
    // arr is mapped to one fixed address which cannot be changed
    // arr = arr + 1; //i.e cannot do this
    cout << endl;
    cout << "arr is " << arr << endl;
    cout << "p is " << ptr << endl;
    ptr = ptr + 1;
    cout << "p++ is " << ptr << " ie. next block of arr is pointed by ptr" << endl;
}