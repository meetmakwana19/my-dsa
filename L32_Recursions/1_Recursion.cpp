#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << src << endl;

    // base case
    if (src == dest)
    {
        cout << "\nReached home\n";
        return;
    }

    // processing - step ahead one step to reach destinstion
    src++;

    // recursive relation
    reachHome(src, dest);
}
int main()
{
    int src = 1;
    int dest = 10;

    reachHome(src, dest);
}