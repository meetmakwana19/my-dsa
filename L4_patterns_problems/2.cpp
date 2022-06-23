#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    // Pattern 1: for n=3, print till 3*3=9
    // 1   2   3
    // 4   5   6
    // 7   8   9

    int i = 1;
    int count = 1; // to count the numbers and print in matrix

    // to cover each column ⬇
    while (i <= n)
    {
        int j = 1;
        // to cover each row ➡
        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
