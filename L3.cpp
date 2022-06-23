#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // cout << "Hello";

    // int a, b;

    // try entering input by a enter b OR a space b OR a tab b
    //  the output is same, this means cin doesnt read space, tab \t and enter \n
    // cin >> a >> b;
    // cout << "\nvalue of a and b is " << a << " and " << b << endl;

    // --------------Alternate tricky way to take input without using cin>> directly
    // a = cin.get(); // cin.get() returns a character value
    // returns 49 ASCII value on 1 as input
    // returns 32 ASCII value on SPACEBAR as input
    // returns 10 ASCII value on ENTER as input
    // returns 9 ASCII value on TAB as input
    // cout << "\nASCII value of a is via get function :- " << a;

    // ************Ex : Make a program to determin its between a-z/A-Z/0-9.
    char ch;
    cout << "Enter a character :";
    ch = cin.get();
    cout << ch;
    if (ch > 64 && ch < 91) // ASCII Codes : A=65, Z=90
    {
        cout << "It is between Capital A-Z" << endl;
    }
    else if (ch > 96 && ch < 123) // ASCII Codes : a=97, z=122
    {
        cout << " It is between small a-z" << endl;
    }
    else if (ch > 47 && ch < 58) // ASCII Codes : 0=48, 9=57
    {
        cout << " It is between 0-9" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    // **********Finding sum of n numbers
    int n;
    cout << "Enter number to count sum till : ";
    cin >> n;

    int i = 1; // i=2 in case of sum of n even numbers, i=1 for odd
    int sum = 0;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 1; // i+2 in case of sum of n even numbers or odd numbers
    }

    // verifiable by formula : sum = n(n+1)/2
    cout << "Value of sum is : " << sum << endl;

    // ************Program to  check prime number

    // modulo operator is % which gives remainder as output
    // 1 % n = 0 means divisible
    // prime number means no modulo zero between 2 and (n-1) numbers, means divisble by 1 and itself n.
    // to check prime, divide n by all numbers between 2 and (n-1)

    int pno;
    cout << "Enter number check prime or not : ";
    cin >> pno;

    int j = 2; // to start from 2 as 1 wont be checked as it is divisible with everyone

    while (j < pno) // check till pno-1
    {
        // division successfull
        if (n % j == 0)
        {
            cout << "Not a Prime number for " << j << endl;
        }
        else
        {
            cout << "A prime for " << j << endl;
        }
        j = j + 1;
    }
}
