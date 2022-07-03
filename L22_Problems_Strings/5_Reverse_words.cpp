// https://www.codingninjas.com/codestudio/problems/reverse-the-order-of-words-in-a-string_1264991?leftPanelTab=1
string reverseOrderWords(string str)
{
    int start = 0;
    int end = str.length() - 1;

    string temp = "";
    string ans = "";

    while (start <= end)
    {
        char ch = str[start];
        if (ch != ' ')
        {                     // when a char is present
            temp = temp + ch; // append current ch with temp to form a word
        }
        // last word will be stored in temmp till here as space wont be there after it, so this condition is checked outside while loop

        else if (ch == ' ')
        { // when a word is finished and space is found
            if (ans != "")
            { // if a word is already stored in word
                // this is reverse logic :- putting 2nd word(temp) before the 1st word stored in ans
                ans = temp + " " + ans;
            }
            else
            {
                // when 1st word encountered at space, save it in ans
                ans = temp;
            }
            temp = ""; // resetting the temp
        }
        start++;
    }

    // for last word
    if (temp != "")
    {
        if (ans != "")
        {
            ans = temp + " " + ans;
        }
        else
        {
            ans = temp;
        }
    }
    return ans;
}

// practise code :

#include <bits/stdc++.h>
using namespace std;
string result(string s)
{
    int left = 0;
    int right = s.length() - 1;

    string temp = "";
    string ans = "";

    // Iterate the string and keep on adding to form a word
    // If empty space is encountered then add the current word to the result
    while (left <= right)
    {
        char ch = s[left];
        if (ch != ' ')
        {
            // storing whole word in temp
            temp += ch;
        }
        else if (ch == ' ')
        {
            if (ans != "")
                ans = temp + " " + ans;
            else
                // getting the completed word into ans
                ans = temp;
            temp = ""; // reset for new word
        }
        left++;
    }

    // If not empty string then add to the result(Last word is added)
    if (temp != "")
    {
        if (ans != "")
            ans = temp + " " + ans;
        else
            ans = temp;
    }

    return ans;
}
int main()
{
    string st = "Hello world";
    cout << "Before reversing words: " << endl;
    cout << st << endl;
    cout << "After reversing words: " << endl;
    cout << result(st);
    return 0;
}
