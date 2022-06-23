// TRIANGULAR ALPHABETS PATTERN
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;

    int i = 1;

    int count = 0; //======For pattern 2

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i; //-----For pattern 4 to count the first element of the row
        while (j <= i)         //-----------IMP ! print j only i times, means print `A or B` i= 1 or 2 or 3 times for such trinagular problems
        {
            // Pattern 1 :
            // A
            // B B
            // C C C
            // char ch = 'A' + i - 1; // deciding the alphabet based on the row number i.e by i
            // cout << ch;

            // Pattern 2 : Counted continous triangular alphabets
            // A
            // B C
            // D E F
            // G H I j
            // char ch = 'A' + count;
            // cout << ch;
            // count = count + 1;

            // Pattern 3 :
            // A
            // B C
            // C D E
            // D E F H
            // char ch = 'A' + i + j - 2;
            // cout << ch;

            // Pattern 4 : Inverted
            // D
            // C D
            // B C D
            // A B C D
            cout << ch;
            ch = ch + 1;

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}