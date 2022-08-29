// a to the power b
#include <iostream>
using namespace std;

int power(int a, int b)
{

    // base case
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    // recursive call
    int ans = power(a, b / 2);

    if (b % 2 == 0) // even power
    {
        return ans * ans;
    }
    else // odd power
    {
        return a * ans * ans;
    }
}
int main()
{
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "\nEnter b : ";
    cin >> b;

    // int ans = 1;
    // for (int i = 0; i < b; i++)
    // {
    //     ans = ans * a;
    // }

    int ans = power(a, b);
    cout << "\na to the power b is " << ans << endl;
}