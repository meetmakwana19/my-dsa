#include <iostream>
using namespace std;

void update(int **p) // p comes here as pass by value, so new copy block will be made for p for this function
{
     // p = p + 1; // No change, p comes here as pass by value, so new copy block will be made for p for this function

     // *p = *p + 1; // updates *ptr1 from say eg. 0x61feb8 to 0x61febc
     // cout << "~Inside update, addr in p is -> " << p << endl;

     //**p means go 2 levels deep in address stored by p and update it
     **p = **p + 1; // update works on the int !!
     cout << "~Inside update, addr in p is -> " << p << endl;
}

int main()
{
     // Multi level pointers

     int i = 5;
     int *ptr = &i;
     int **ptr2 = &ptr;

     cout << "Before update : " << endl;
     cout << i << endl;
     cout << *ptr << " ";
     cout << ptr << endl;
     cout << **ptr2 << " ";
     cout << ptr2 << endl;

     update(ptr2);

     cout << "After update : " << endl;
     cout << i << endl;
     cout << *ptr << " ";
     cout << ptr << endl;
     cout << **ptr2 << " ";
     cout << ptr2 << endl;
}