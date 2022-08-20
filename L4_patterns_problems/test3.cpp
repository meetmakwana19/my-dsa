// Code by
// Meet Suresh Makwana (BE Comps - Viva Institute of Technology, Mumbai University)
// Date - 18-08-2022

#include <iostream>
using namespace std;

int main()
{
    cout << "----------------------\n";
    cout << "       Program 3      \n";
    cout << "----------------------\n";
    int n;
    cout << "Please enter odd length : ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Please give odd number\n";
    }
    else if (n < 5)
    {
        cout << "Please give number greater than or equals to 5\n";
    }
    else
    {
        // for first line
        int i = 1;
        while (i <= ((n - 1) / 2) + 1)
        {
            cout << "* ";
            i = i + 1;
        }
        cout << endl;

        // for next left right lines which are half
        int a = 1;
        while (a <= ((n - 1) / 2) - 1) // for rows
        {
            int j = 1;
            while (j <= ((n - 1) / 2) + 1) // for columns
            {
                if (j == 1)
                {
                    cout << "* ";
                }
                else if (j == ((n - 1) / 2) + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
                j++;
            }
            cout << endl;
            a++;
        }

        // for middle line
        int b = 1;
        while (b <= n)
        {
            cout << "* ";
            b = b + 1;
        }
        cout << endl;

        // for next left right lines which are half
        int c = 1;
        while (c <= ((n - 1) / 2) - 1) // for rows
        {
            int j = 1;
            while (j <= ((n - 1) / 2) + 1) // for columns
            {
                if (j == 1)
                {
                    cout << "* ";
                }
                else if (j == ((n - 1) / 2) + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
                j++;
            }
            cout << endl;
            c++;
        }

        // for last line
        int d = 1;
        while (d <= ((n - 1) / 2) + 1)
        {
            cout << "* ";
            d = d + 1;
        }
    }
}