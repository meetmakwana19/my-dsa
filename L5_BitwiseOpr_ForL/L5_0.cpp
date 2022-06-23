#include <iostream>
using namespace std;

int main()
{
    int a = 4; // 0100 binary
    int b = 6; // 0110 binary

    // BITWISE OPERATORS

    cout << "a&b is " << (a & b) << endl;
    cout << "a|b is " << (a | b) << endl;
    cout << "~a is " << (~a) << endl;
    // a is first NOT operated, founds out to be negative due to 1 in rightmost bit, then 2s compliment.
    // to calculate 2s compliment : First calculate 1s compliment by inverting the bits, next step is to add to 1s comppliment result. Done
    cout << "~b is " << (~b) << endl;
    cout << "a^b is " << (a ^ b) << endl;

    // RIGHT SHIFT OPERATOR
    cout << (17 >> 1) << endl; // 17÷2
    cout << (17 >> 2) << endl; // 17÷2÷2

    // LEFT SHIFT OPERATOR
    cout << (19 << 1) << endl; // 19*2
    cout << (19 << 2) << endl; // 19*2*2
    cout << (19 << 3) << endl; // 19*2*2*2
    // special case : Big number's left shift will be negative as the leftmost bit will be 1

    int i = 7;
    cout << (++i) << endl;
    // =8, 8
    cout << (i++) << endl;
    // =8, 9
    cout << (--i) << endl;
    // =8, 8
    cout << (i--) << endl;
    // =8, 7
    cout << i;
}