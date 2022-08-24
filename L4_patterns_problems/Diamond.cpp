#include <iostream>
using namespace std;

int main()
{
    cout << "Enter n : ";
    int n;
    cin >> n;

    // to print upper traingle
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        int j = 1;
        while (j <= (i * 2) - 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    // to print lower half
    int k = 1;
    while (k <= n)
    {
        int space = k;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        space++;

        int j = 1;
        while (j <= (2 * (n - k) - 1))
        {
            cout << "*";
            j++;
        }
        cout << endl;
        k++;
    }
}