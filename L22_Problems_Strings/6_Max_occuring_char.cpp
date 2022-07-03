// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

#include <iostream>
using namespace std;

char getMaxOccuringChar(string s)
{
    // assuming this logic :
    // [0,0,0,............,0] zero values initialized to count occurences
    // [a,b,c,............,z]
    //  ↑ ↑ ↑              ↑
    // [0,2,3,............,25] Index of 26 alphabetes.
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int num = ch - 'a'; // find the index of that ch
        arr[num]++;         // increment the count of that ch by 1(means 0 will be 0++ to 1)
    }

    // to find the max occured ch
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) // iterating over whole array of size 26
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = ans + 'a'; // to get back the value of ch from ascii value given by arr.
    return finalAns;
}
int main()
{
    string s;
    cout << "Enter string : ";
    cin >> s;
    cout << "\nMax occuring char is - " << getMaxOccuringChar(s);
}