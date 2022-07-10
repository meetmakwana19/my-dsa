#include <iostream>
using namespace std;

int factorial(int n)
{
    // cout << n << endl;
    // base case ⬇, without it segmentation fault will occur coz of stack overflow and unlimiited garbage value will be printed coz of upper line untill memory is full.
    if (n == 0)
    {
        return 1; // base case must have `return` keyword
    }

    int chotiProblem = factorial(n - 1);
    int badiProblem = chotiProblem * n; // eg 5! = 5 * 4!

    return badiProblem;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;
}