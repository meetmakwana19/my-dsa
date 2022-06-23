#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number to check prime = ";
    cin >> n;

    bool isPrime = 1;
    for (int i = 2; i < n; i++)

    {
        if (n % i == 0)
        {
            // cout << n << " is not a prime number." << endl;
            isPrime = 0;
            break; // used break to avoid unnecessary other computations if encountered divisible number
        }
    }
    if (isPrime == 0)
    {
        cout << n << " is not a prime number." << endl;
    }
    else
    {
        cout << n << " is a prime number." << endl;
    }
}