#include <iostream>
using namespace std;

void print(int n)
{

    // base case
    if (n == 0)
    {
        return;
    }

    // tail recursion :
    // cout << n << " ";
    // print(n - 1); // recursive relation

    // head recursion :
    print(n - 1); // recursive relation
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter n to print n numbers : ";
    cin >> n;

    print(n);
}