#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n to print fibonacci series till n = ";
    cin >> n;
    // starting 2 words
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for (int i = 0; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";
        // 0 1 1
        a = b;
        b = nextNumber;
    }
}