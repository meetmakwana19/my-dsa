#include <iostream>
using namespace std;

int main()
{
    int n; // for input
    cout << "Enter number : ";
    cin >> n;

    int i = 1;

    // Type 1 pattern
    // *****
    // *****
    // *****
    // for vertical traversal across a column or variour rows
    // while (i <= n) // for int i=1, use (i <= n) and if i=0 then use condition (i < n)
    // {
    //     // for horizontal traversal across a row or various columns
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // type 2 pattern
    // 111
    // 222
    // 333
    // for vertical traversal across a column or variour rows
    while (i <= n) // for int i=1, use (i <= n) and if i=0 then use condition (i < n)
    {
        // for horizontal traversal across a row or various columns
        int j = 1;
        while (j <= n)
        {
            cout << i; // print row number like 1 1 1 or 2 2 2
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
