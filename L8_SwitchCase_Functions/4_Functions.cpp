#include <iostream>
using namespace std;

bool isEven(int n)
{
    // odd
    if (n & 1)
    {
        return 0; // false
    }
    // even
    else
    {
        return 1; // true
    }
}

int factorial(int n)
{
    int facto = 1;
    for (int i = 1; i <= n; i++) // calculates factorial of n by mutiplying i, n times
    {
        facto = facto * i;
    }
    return facto;
}
int nCr(int n, int r) // formula : nCr = n! / [r! * (n-1)!]
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - 1);
    return numerator / denominator;
}

int main()
{
    int num;
    cout << "Enter number = ";
    cin >> num;

    if (isEven(num) == 1)
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number." << endl;
    }

    int a;
    cout << "Enter number to calculate factorial = ";
    cin >> a;
    cout << factorial(a);

    int n, r;
    cout << "Enter n = ";
    cin >> n;
    cout << "Enter r = ";
    cin >> r;
    cout << "Factorial is " << nCr(n, r) << endl;
}
