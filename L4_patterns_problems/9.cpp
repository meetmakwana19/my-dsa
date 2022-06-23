#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // Pattern :
        // 1111
        //  222
        //   33
        //    4
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int j = 1;
        while (j <= n - i + 1) //.............. to print that much times in a row in inverted form
        {
            // cout << i; //........to print i rowth number in full row

            // pattern 2 :
            // 1234
            //  234
            //   34
            //    4
            cout << i + j - 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}