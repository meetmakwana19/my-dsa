#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;

    // Pattern :
    //    1
    //   121
    //  12321
    // 1234321

    int i = 1;
    while (i <= n)
    {
        // Print 1st space triangle
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // Print 2nd pushed numbered triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }

        // Print 3rd numbered triangle
        int k = i - 1;
        while (k)
        {
            cout << k;
            k = k - 1;
        }

        cout << endl;
        i = i + 1;
    }
}