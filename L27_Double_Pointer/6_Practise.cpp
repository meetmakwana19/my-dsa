#include <iostream>
using namespace std;

void update(int *p)
{
    *p = (*p) * 2;
}

void fun(int arr[])
{
    cout << arr[0] << " ";
}

void increment(int **p)
{
    ++(**p);
}
int main()
{
    int i = 10;
    update(&i);
    cout << i << endl;

    int arr[] = {11, 12, 13, 14};
    fun(arr + 1);
    cout << arr[0] << endl;

    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;

    int first1 = 100;
    int *p1 = &first1;
    int **q1 = &p1;
    int second1 = ++(**q1);
    int *r1 = *q1;
    ++(*r1);
    cout << first1 << " " << second1 << endl;

    int num = 110;
    int *p2 = &num;
    increment(&p2);
    cout << num << endl;
}