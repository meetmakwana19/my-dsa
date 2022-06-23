#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    int i = 1;
    int count = 1; //........for pattern 2

    while (i <= n)
    {
        //    1
        //   22
        //  333
        // 4444
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int j = 1;
        while (j <= i) //.......To print it j, i times
        {
            // cout << i; //......To print the rowth i number

            // Pattern 2 :
            //    1
            //   23
            //  456
            // 78910
            cout << count;
            count = count + 1;

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}