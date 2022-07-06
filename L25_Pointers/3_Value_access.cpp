#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    cout << "Before ++, num is " << num << endl;

    int *p = &num;

    (*p)++;

    cout << "Afterr ++, num is " << num << endl;

    cout << "\nCopying p pointer into a new pointer q\n";
    int *q = p;
    cout << "*q is " << *q << endl;
    cout << "*p is " << *p << endl;
    cout << "q is " << q << endl;
    cout << "p is " << p << endl;
    cout << "\nHence p and q are same\n\n";

    // *Imp
    int i = 3;
    int *t = &i;
    cout << "*t is " << *t << endl;
    cout << "t is " << t << endl;

    cout << "\nAfter increment\n";
    (*t)++; // *t=*t+1

    // if addr of i is 100 then on +1, it'll be incremented by once to the next empty mememory block
    // difference in 4 bytes as it is int datatype
    t++; // t=t+1

    cout << "t is " << t << " r<= Address incremenred by 4 bytes" << endl;
    cout << "*t is " << *t << endl;
}