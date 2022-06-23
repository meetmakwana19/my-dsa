#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;

    // DABANGG Pattern :
    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1

    int i = 1;
    while (i <= n)
    {
        // Inverted Triangle 1
        int j = 1;
        while (j <= n - i + 1) //........ traversing n-i+1 = 5-1+1 = 5 times to print 5 elements for i=1
        {
            cout << j << " ";
            j = j + 1;
        }

        // Middle star triangle
        int s = 1;
        while (s <= (i - 1) * 2) //....traversing (i - 1)*2 times in a row. to print multiples of * for such pattern
        {
            cout << "* ";
            s = s + 1;
        }

        // Last Reverse triangle
        int k = n - i + 1; //..... calculating the element to be printed after star
        while (k > 0)
        {
            cout << k << " ";
            // cout << k;
            k = k - 1; //.....to get the next lower number after k in the row.
        }

        cout << endl;
        i = i + 1;
    }
}