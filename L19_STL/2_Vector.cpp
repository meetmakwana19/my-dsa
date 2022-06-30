#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector is a dynamic array
    // if there's a vector of size 4
    // and if a new 5th element needs to be inserted
    // then a new vector will be made twice the size of OG one
    // and then old contents along with new one will be copied into the new doubled size vector of size 8 with 5 elements

    // creating a new vector of int type ( no memory assigned yet)
    vector<int> v;

    // creating a new vector by initializing 5 capacity and all 5 places with 1 as value
    vector<int> a(5, 1);

    // to copy array `a` into a new array
    vector<int> newV(a);

    // capacity means memory assigned ans zie means number of elements
    cout << "Capacity of vector v : " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity of vector v : " << v.capacity() << endl;
    cout << "Size is " << v.size() << endl;

    v.push_back(2);
    cout << "Capacity of vector v : " << v.capacity() << endl;
    cout << "Size is " << v.size() << endl;

    v.push_back(3);
    cout << "Capacity of vector v : " << v.capacity() << endl;
    cout << "Size is " << v.size() << endl;

    v.push_back(4);
    cout << "Capacity of vector v : " << v.capacity() << endl;
    cout << "Size is " << v.size() << endl;

    v.push_back(5);
    cout << "Capacity of vector v : " << v.capacity() << endl; // capacity doubles to 8 as no memory was there for 5th element
    cout << "Size is " << v.size() << endl;

    cout << "Front " << v.front() << endl;
    cout << "Back " << v.back() << endl;

    cout << "-Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size is " << v.size() << endl;

    v.pop_back();
    cout << "-After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size is " << v.size() << endl;

    v.clear();
    cout << "-After clear" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size is " << v.size() << endl;

    cout << "Vector a :" << endl;
    for (int j : a)
    {
        cout << j << " ";
    }
    cout << endl;
    cout << "Capacity of vector a : " << a.capacity() << endl; // capacity doubles to 8 as no memory was there for 5th element
    cout << "Size is " << a.size() << endl;

    cout << "Vector newV :" << endl;
    for (int i : newV)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity of vector newV : " << newV.capacity() << endl; // capacity doubles to 8 as no memory was there for 5th element
    cout << "Size is " << newV.size() << endl;
}