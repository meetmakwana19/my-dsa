#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= (num - 1); i++)
    {
        if (num % i == 0)
        {
            // means division done means not a prime
            return 0; // not prime
        }
    }
    return 1;
}
int main()
{
    int n;
    cout << "Enter n to check prime = ";
    cin >> n;
    if (isPrime(n))
    {
        cout << "Prime no." << endl;
    }
    else
    {
        cout << "Not Prime no." << endl;
    }
}