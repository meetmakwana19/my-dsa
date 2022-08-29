#include <iostream>
using namespace std;

// void reverse(string &name, int i, int j)
void reverse(string &name, int i)
{
    // cout << "Call recieved for " << name << endl;

    int n = name.length();
    // base case
    // if (i > j)
    if (i > n - i - 1)
    {
        return;
    }

    // swap(name[i], name[j]);
    swap(name[i], name[n - i - 1]);
    i++;
    // j--;
    reverse(name, i);
}
int main()
{
    string name = "meet";
    // cout << name << endl;

    // reverse(name, 0, name.length() - 1);

    // single pointer approach
    reverse(name, 0);

    cout << name;
}