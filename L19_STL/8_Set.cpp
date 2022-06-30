#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Set stores unique elements only in itself
    // If 5 times 5 is inserted then too only one 5 will be stored in set

    // Set is implemented using BST(Binary search tree) behind the scenes
    // No modification can be done on inserted item, either delete or insert !

    // Set is slower than unordered set
    // When we implement unordered set, the answers comes in random order and not in a sortd order

    set<int> s;

    s.insert(0);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1); // multiple 1 wont be inserted multiple times ass it already exits
    s.insert(2);
    s.insert(3);

    cout << "Size is " << s.size() << endl;
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // s.erase(s.begin() + 2); //this is not possible so getting the iterator outside

    set<int>::iterator it = s.begin();
    it++;
    it++;
    s.erase(it);

    cout << "Size is " << s.size() << endl;
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // to check presence
    cout << s.count(-5) << endl;

    s.insert(4);
    s.insert(5);
    set<int>::iterator itr = s.find(3);
    // cout << "Value is at " << *itr << endl; // printing the value present at itr location

    cout << "Elements from 3 are : ";
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}