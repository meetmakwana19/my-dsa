#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // Dequeue can have insertions/deletions from front & back both
    // creating a new doubly ended queue
    deque<int> d;

    // to insert elements into dequeues
    d.push_back(1);
    d.push_front(2);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    // d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "First element : " << d.at(0) << endl;
    cout << "Front element : " << d.front() << endl;
    cout << "Back element : " << d.back() << endl;

    cout << "Empty ? " << d.empty() << endl;

    cout << "Before erase\n";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase\n";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}
