#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n; // int has a range of -2³¹ to +(2³¹ - 1)
    cout << "Enter number to find it's binary = ";
    cin >> n;
    if (n < 0)
    {
        n *= (-1);
        cout << "n is " << n << endl;
    }
    int i = 0;
    int ans = 0;
    int onesCompAns = 0;

    // wont be able to print the usless zeros at the right part as the while loop terminates if it encounters 0 and hence not whole 32bit form is not yet printed in this version of my code.
    while (n != 0)
    {
        int bit = n & 1;
        // cout << "Rightmost Bit is" << bit << endl;

        ans = (bit * pow(10, i)) + ans; //...Created formula(reverse flow) gets right shifted later on

        // for 1s compliment
        int testBit = bit;
        if (testBit == 1)
        {
            testBit = 0;
        }
        else
        {
            testBit = 1;
        }
        // cout << " onesCompBit is" << testBit << endl;
        // combining bits
        onesCompAns = (testBit * pow(10, i)) + onesCompAns;

        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl;
    cout << "onesCompAnswer is " << onesCompAns << endl;

    // doing bitwise OR to do the 1 addition for twos compliment
    int twosComp = onesCompAns | 1;
    cout << "twosCompAnswer is " << twosComp << "<-----ANSWER" << endl;

    cout << "Therefore, the number will be stored in this form " << twosComp << " except the 0s before it are not printed." << endl;
}