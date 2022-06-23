// print that much numbers of fibonacci series how much is the input n;
#include <iostream>
using namespace std;

void countFib(int n)
{
    int a = 0;
    int b = 1;
    if (n == 1)
    {
        cout << a << endl;
    }
    else if (n == 2)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << a << " " << b << " ";
        for (int i = 2; i < n; i++)
        {
            int next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
    }
}

int main()
{
    int n;
    cout << "Enter n to print n numbers of fibonacci series = ";
    cin >> n;
    countFib(n);
}