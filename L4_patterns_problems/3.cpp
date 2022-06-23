#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    // Pattern : n=4, therefore rows =4
    // *                ➡ for i=1
    // * *              ➡ for i=2
    // * * *            ➡ for i=3
    // * * * *          ➡ for i=4
    // means to print * i times in the inner j loop

    int count = 1;

    int row = 1; // using row variale instead of i
    while (row <= n)
    {
        int column = 1;
        // int value = row;      // for valued pattern type but better approach is there by avoiding this
        while (column <= row) //----------------IMP ! print j only i times, means print * i= 1 or 2 or 3 times for such trinagular problems
        {
            // pattern 1
            // cout << "* ";

            // pattern 2 :
            // for numerical pattern like
            // 1
            // 1 2
            // 1 2 3
            // 1 2 3 4
            // cout << row; //printing the row number

            // pattern 3 :
            // for valued pattern like using count variable
            // 1        -for row i=1 start from 1
            // 2 3      -for row i=2 start from 2
            // 3 4 5    -for row i=3 start from 3
            // 4 5 6 7  -for row i=4 start from 4
            // cout << value << " ";
            // value = value + 1;
            cout << row + column - 1 << " "; //---------better alternative than using an extra int value variable

            // pattern 4 :
            // cout << row - column + 1 << " "; //---------another reversed pattern type for valued pattern

            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}