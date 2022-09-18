#include <iostream>
using namespace std;

int factorial(int n)
{
    // cout << n << endl;
    // base case ⬇, without it segmentation fault will occur coz of stack overflow and unlimiited garbage value will be printed coz of upper line untill memory is full.
    if (n == 0)
    // K1 TC for this block
    {
        return 1; // base case must have `return` keyword
    }

    // F(n) = n * F(n-1) ------> Recursive Relation
    // K2 TC for n*
    // (n-1) TC for F(n-1)
    int chotiProblem = factorial(n - 1);
    int badiProblem = chotiProblem * n; // eg 5! = 5 * 4!

    // TC = K1 + K2 + T(N-1)

    return badiProblem;
    // TC : O(n)
    // SC : O(n)
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;
}