#include <iostream>
using namespace std;

int power(int n)
{

    // base condition
    if (n == 0)
    {
        return 1;
    }

    // recursive relation
    // int chotiProblem = power(n - 1);
    // int badiProblem = 2 * chotiProblem;

    // return badiProblem;

    return 2 * power(n - 1);
}
int main()
{
    int n;
    cout << "Enter n for 2^n : ";
    cin >> n;

    int ans = power(n);
    cout << "2^" << n << " is " << ans;
}