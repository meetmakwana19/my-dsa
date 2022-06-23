#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n; // int has a range of -2³¹ to +(2³¹ - 1)
    cout << "Enter number to find it's binary = ";
    cin >> n;

    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        // doing & operation with 1(....00001) gets the rightmost bit
        int bit = n & 1; // getting rightmost bit
        // cout << "Rightmost Bit is" << bit << endl;
        ;

        ans = (bit * pow(10, i)) + ans; //...Created formula(reverse flow) gets right shifted later on

        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans;
}