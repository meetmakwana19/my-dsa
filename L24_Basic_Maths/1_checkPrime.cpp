#include <iostream>
using namespace std;

int checkPrime(int n)
{
    // definition of prime numbers, any number having only two positive divisors are known as prime numbers
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        // checking for numbers b/w 2 to n-1.
        //  If n is divisible by any of one then it's not prime
        if (n % i == 0)
        {
            // if remainder=0 means divisible
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << endl;
    if (checkPrime(n))
    {
        cout << "Prime!\n";
    }
    else
    {
        cout << "Not Prime\n";
    }
}