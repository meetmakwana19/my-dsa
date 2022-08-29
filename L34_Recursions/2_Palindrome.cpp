// a string is a palindrome is the string and it's reverse is same
#include <iostream>
using namespace std;

bool isPalindrome(string str, int i, int j)
{
    cout << "i is -> " << i << endl;
    cout << "j is -> " << j << endl;
    // base condition
    if (i > j)
    {
        return true;
    }

    if (str[i] == str[j])
    {
        return isPalindrome(str, i + 1, j - 1);
    }
    else
    {
        return false;
    }
}
int main()
{
    string str;
    cout << "Enter string : ";
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1))
    {
        cout << "It is a Palindrome";
    }
    else
    {
        cout << "It is NOT a Palindrome";
    }
}