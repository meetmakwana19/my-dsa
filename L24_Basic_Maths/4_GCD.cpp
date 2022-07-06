#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b; // eg if gcd(0,24) then answer is b=24
    }
    if (b == 0)
    {
        return a; // eg if gcd(24,0) then answer is a=24
    }

    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else if (b > a)
        {
            b -= a;
        }
    }
    return b;
}
int main()
{
    int a, b;
    cout << "\nEnter a = ";
    cin >> a;
    cout << "\nEnter b = ";
    cin >> b;

    int ans = gcd(a, b);

    cout << "\nGCD is " << ans << endl;
}