#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    char *p = &ch;
    ch++;
    cout << *p << endl;

    char arr[] = "abcde";
    char *p2 = &arr[0];
    cout << p2 << endl;

    p2++;
    cout << p2 << endl;

    char str[] = "meet";
    char *p3 = str;
    cout << str[0] << " " << p3[0] << endl;
}