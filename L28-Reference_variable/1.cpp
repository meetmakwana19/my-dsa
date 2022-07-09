#include <iostream>
using namespace std;

// PASS BY REFERENCE - Same memory block is used but just with different name ans a copy is not created.
void update2(int &j) // used reference variable
{
    j++;
}

int &func(int a) // very very bad practise as ans which is etting passed is local
{
    int num = a;
    num++;
    int &ans = num;
    return ans;
}

int *fun(int n) // very bad practise as ptr returned is local ans nothing wont be returned and  warning can come
{
    n++;
    int *ptr = &n;
    return ptr;
}
void update(int n) // passed parameter as value so
{
    n++;
}

int main()
{
    // Reference variable :
    // same memory block but different names assigned to it

    int i = 5;

    // creating a reference variable
    int &j = i;

    cout << j << endl;
    cout << i << endl;
    j++;
    cout << i << endl;
    i++;
    cout << j << endl;

    int n = 10;
    cout << "Before update n : " << n << endl;
    // update(n);
    update2(n);
    // func(n);
    // fun(n);
    cout << "After update n : " << n << endl;
}