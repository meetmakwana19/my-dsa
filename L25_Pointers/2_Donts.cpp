#include <iostream>
using namespace std;

int main()
{
    int *ptr; // never just do this ! very bad and risky practise as ptr can have any garbage value pointing anywhere in the memory
    // int *ptr = 0; // this will give segmentation fault as there's nothing in memory which points to zero

    cout << "Bad practise : *ptr is " << *ptr << endl;

    cout << "\nWay 1 to iniliaze :\n";
    int i = 5;
    int *p = 0;
    p = &i; // making p point to address of i
    // *imp : pronounce & as ADDRESS OF OPERATOR
    cout << "*p is " << *p << endl;
    cout << "p is " << p << endl;

    cout << "\nWay 2 to iniliaze :\n";
    int *q = &i;
    cout << "*q is " << *q << endl;
    cout << "q is " << q << endl;

    cout << "\nBoth giving same O/P\n\n";
}