#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;

    int i = 1;

    char start = 'A'; // For pattern 3
    // cout << "ch start is " << start << endl;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i; // for pattern 5 to count the first element of the row
        while (j <= n)
        {
            // pattern 1 :
            // A A A
            // B B B
            // C C C
            // type casting
            // char ch = 'A' + i - 1; // using i as want to print same A in the 1st iteration, then loop breaks and i=2 will give B for whole j while loop

            // Pattern 2 :
            // A B C
            // A B C
            // A B C
            // char ch = 'A' + j - 1;
            // cout << ch;

            // pattern 3 : using a start variable to keep incrementing it
            // A B C
            // D E F
            // G H I
            // char result = start + j ;
            // cout << start;
            // start = start + 1;

            // patter 4 : the formula used will be i+j-1, trick is to map it to Alphabet, i+j-1=1 ->A for 1st element in matrix(need to map 1 to A)
            // Add `A` in BTS to get A in RHS and subtracting 1 in BTS to remove 1 from RHS = add `A-1` in BTS
            // ∴ i+j-1+A-1 = 1+A-1
            // ∴ A+i+j-2 = A .................Derived the formula
            // A B C
            // B C D
            // C D E
            // char value = 'A' + i + j - 2;
            // cout << value;

            // My discovered pattern * pattern 5 :
            // DEFG
            // CDEF
            // BCDE
            // ABCD
            cout << ch;
            ch = ch + 1;

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}