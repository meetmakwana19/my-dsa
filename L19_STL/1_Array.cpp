#include <iostream>
#include <array> //STL library for array
using namespace std;

int main()
{
    // Initialized a basic array
    int basic[3] = {1, 2, 3};

    // STL array, implementation of array STL happens with the fixed sized basic static array
    array<int, 3> a = {1, 2, 3};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // some operations
    cout << "Element at index 2 is " << a.at(2) << endl;
    cout << "Array is empty or not : " << a.empty() << endl;
    cout << "First element : " << a.front() << endl;
    cout << "Last element : " << a.back() << endl;
}