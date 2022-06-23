#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cout << "Enter n = ";
    cin >> n;
    // Pattern 1 : n=4
    // 1   2   3   4
    // 1   2   3   4
    // 1   2   3   4
    // 1   2   3   4
    // j moves ➡
    // i moves ⬇
    // row = 4 ➡, columns = 4 ⬇

    // vertical traversal of i ⬇
    while (i <= n)
    {
        int j = 1;
        // for printing 1 line(row) via j which moves ➡    1  2   3
        while (j <= n)
        {
            cout << j << " ";

            // pattern 2 :
            // for reverse printing
            // 3 2 1
            // 3 2 1
            // 3 2 1
            // cout << n - j + 1 << " ";

            j = j + 1;
        }

        // for next line of 1 2 3
        cout << endl;
        i = i + 1;
    }
}
