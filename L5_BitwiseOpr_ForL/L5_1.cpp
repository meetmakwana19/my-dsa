#include <iostream>
using namespace std;

int main()
{
    // pro post operator
    int a = 1;
    int b = a++;
    int c = ++a;

    cout << b << endl;
    cout << c << endl;

    // For loops

    int n;
    cout << "Enter n for FOR LOOP : ";
    cin >> n;
    int i = 1;
    for (;;) //
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break; // removes from current loop ie. for loop is the current loop and gets us in
        }
        i++;
    }
    // break brings the pointer here 😁

    for (int a = 0, b = 2, c = 3; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
    {
        cout << "a is " << a << ", b is " << b << ", c is " << c << endl;
    }

    // syntax
    // for ( one-time initialization ; condition ; updation){
    /* code */
    // }
    // Flow from condition to ➡ code body
    // then from body completion to ➡ updation
    // then from updation to ➡ condition untill it becomes false.

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum is " << sum;
}