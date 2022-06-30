#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Trying to use STL Binary search\n";

    vector<int> v;

    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);

    cout << "Array should be sorted for binary search.\n\n";
    cout << "Element present by searching ? " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Upper bound " << upper_bound(v.begin(), v.end(), 2) - v.begin() << endl;
    cout << "Lower bound " << lower_bound(v.begin(), v.end(), 1) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "Max of a,b is " << max(a, b) << endl;
    cout << "Min of a,b is " << min(a, b) << endl;

    swap(a, b);
    cout << "Swap of a,b is " << a << ", " << b << endl;

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << s << endl;

    cout << "Before rotate of vector v :" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate of vector v :" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // sort function is based on intrasort
    // its done by combination of 3 things ->  Quick sort, Heap sort & insertion sort
    sort(v.begin(), v.end());
    cout << "After sorting of vector v :" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
}