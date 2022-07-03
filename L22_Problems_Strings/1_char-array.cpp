#include <iostream>
#include <string.h>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
void reverse(char arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkPalindrome(char arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        if (arr[start] != arr[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
int main()
{
    // STRINGS in C++ :
    // 1 dimensional character array
    // ***which is terminate by '\0' character

    char arr[3];
    cout << "Enter your name : ";

    //**IMP - cin stops execution at space, tab, enter.
    cin >> arr;

    // arr[3] = '\0'; // null character will be inserted at this index of char arr after which cout will suspend execution and will only print characters till index 2.

    cout << "Your name is ";
    cout << arr << endl;

    int length = getLength(arr);
    cout << "Length of a string is " << length << endl;

    int len = strlen(arr);
    cout << "Length by inbuild funtion is " << len << endl;

    reverse(arr, length);
    cout << "Reverse of a string is " << arr << endl;

    cout << "Palindrome ? " << checkPalindrome(arr, length) << endl;

    cout << "Lowercase - " << toLowerCase('N') << endl;
}