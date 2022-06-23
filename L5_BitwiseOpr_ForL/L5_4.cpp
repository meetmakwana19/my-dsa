#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Hii" << endl;
        cout << "Hello" << endl;

        continue; // it makes to go back to check the condition and continue loop again from top by avoiding whats below it.

        // this part is unreachable due to use of continue above it
        cout << "Reply toh karde";
    }

    for (int i = 0; i <= 5; i++)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // infinite 0 loop
    // for (int i = 0; i <= 5; i--)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    for (int i = 0; i <= 12; i += 2)
    {
        cout << i << " ";
        if (i & 1)
        {
            cout << "cont ";
            continue;
        }
        i++;
    }
    for (int i = 0; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            // cout << i << " " << j << endl;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; 0)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }
}