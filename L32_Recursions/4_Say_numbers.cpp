#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{

    // bse case
    if (n == 0)
    {
        return;
    }

    // processing
    int digit = n % 10; // eg 432 % 10 = 2
    n = n / 10;         // remaining number i.e. 432 / 10 =  43

    // recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "Enter number : ";
    cin >> n;

    sayDigit(n, arr);
    cout << endl;
}