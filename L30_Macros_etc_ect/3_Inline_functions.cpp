#include <iostream>
using namespace std;

// inline funtion:
// Wherever they're called, the defination is replaced by the codeline automatically in whole prgram before compilation
// benefits : No extra space and no function calling overhead in stack memory
inline int getMax(int &a, int &b)
{
    // tertiary operators
    return (a > b) ? a : b;
}
int main()
{
    int a = 1, b = 2;
    int ans;

    // if (a > b)
    // {
    //     ans = a;
    // }
    // else
    // {
    //     ans = b;
    // }

    ans = getMax(a, b);
    cout << ans << endl;
}