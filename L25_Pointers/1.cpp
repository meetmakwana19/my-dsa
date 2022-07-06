#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    // compiler places 5 into memory at say 100 address
    //  and 100 addr is assigned to varible num.

    // **********
    // address of operator : &
    // finds the exact address in machine's memory

    cout << "Address(in hexadecimal form) of num is -> " << &num << endl;

    // **********
    // Pointer : Does the work of Storing addresses

    // int *ptr; // never just do this ! very bad and risky practise as ptr can have any garbage value pointing anywhere in the memory

    int *ptr = &num; // syntax
    cout << "*ptr is -> " << *ptr << ". Found by pointing to address stored within ptr" << endl;
    cout << "ptr is -> " << ptr << " which is address within ptr" << endl;
    // where * is dereferencing operator
    //  *p means value at address pointed by *p

    // **********
    // Differece in size

    cout << "\nSize of num is -> " << sizeof(num) << endl;
    cout << "Size of pointer is -> " << sizeof(ptr) << endl; // it can be 4 or 8, it varies
}