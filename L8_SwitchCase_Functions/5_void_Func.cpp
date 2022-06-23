#include <iostream>
using namespace std;

// void keyword us used when nothing is returned
void printCount(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " "; // only printing func. not retuning anything
    }
}
int main()
{
    int n;
    cout << "Enter n to print count = ";
    cin >> n;
    printCount(n);
    // return 0;
}