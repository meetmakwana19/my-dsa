#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Map is a data structure
    // Data is stored in the form of key:value pair
    // All keys are unique and only one key can point to one value.

    map<int, string> m;

    // insertion of data
    m[1] = "Tony";
    m[12] = "Steve";
    m[3] = "Thor";

    m.insert({5, "Bruce"});
    cout << "This is ordered map. Therefore will have data in ordered form.\n\n";

    cout << "Before erase\n";
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Present ? " << m.count(12);

    cout << "After erase\n";
    m.erase(5);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Getting data from 3 : \n";
    auto it = m.find(3);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}