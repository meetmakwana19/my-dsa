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
        // pattern 1 :
        //           *
        //        *  *
        //     *  *  *
        //  *  *  *  *
        int space = n - i;
        while (space) //.........1st loop to print spaces
        {
            cout << "   ";
            space = space - 1;
        }

        int j = 1;
        while (j <= i) //.........2nd loop to print *
        {
            cout << " * ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}