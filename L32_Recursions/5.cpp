#include <iostream>
using namespace std;

string removeDuplicate(string &s)
{
    // base case
    if (s.length() == 0)
    {
        return 0;
    }

    cout << "str[0] is " << s[0] << endl;
    cout << "str[1] is " << s[1] << endl;
    if (s[i] == s[i + 1])
    {
        s.erase(1, 0);
    }

    // deletes one char from index 0
    removeDuplicate(s);

    cout << s;
}

int main()
{
    string str;
    cout << "Enter string : ";
    cin >> str;
    str.erase(0, 1);
    cout << "str is " << str;

    // removeDuplicate(str);
}