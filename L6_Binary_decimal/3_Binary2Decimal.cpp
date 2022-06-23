#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter binary = ";
    cin >> n;

    int i = 0, ans = 0;

    while (n != 0)
    {
        int digit = n % 10; // finding the last rigthmost digit
        cout << "Digit is " << digit << endl;

        if (digit == 1) // if bit is 1 then add 2^i
        {
            ans = ans + pow(2, i);
        }

        // divide by 10 to reduce the number by 1 digit 1 digit got discovered above
        n = n / 10;
        i++;
    }
    cout << "Decimal is " << ans << endl;
}