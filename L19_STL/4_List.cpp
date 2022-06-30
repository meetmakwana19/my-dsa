#include <iostream>
#include <list>
using namespace std;

int main()
{
    // List STL is made using double-linked list(double linked-list has two pointers pointing at front and back)

    // direct access of any element position doesn't takes place and full traversal is needed.

    // creating a list of int type named as `l`
    list<int> l;

    // creating a list of int type named as `n`
    // initialising it with 5 elements of value 100
    list<int> n(5, 100);
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of list is " << l.size() << endl;
    cout << endl;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of list is " << l.size() << endl;

    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of list is " << l.size() << endl;
}