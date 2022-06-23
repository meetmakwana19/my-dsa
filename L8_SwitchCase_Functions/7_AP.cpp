// given AP ( 3 * N + 7 )
// find nth term from n input
#include <iostream>
using namespace std;

int ap(int num)
{
    return (3 * num) + 7;
}
int main()
{
    int n;
    cout << "Enter n to find nth term = ";
    cin >> n;
    cout << "Answer is " << ap(n);
}
