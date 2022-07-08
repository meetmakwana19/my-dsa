
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl; // difference here is that it didn't printed addr but printed array

    // means implementation of cout is different for int array and char array
    // cout prints till it encounters null character  /0 for cout

    int *ptr = &arr[0];
    cout << "ptr is " << ptr << endl;
    cout << "*ptr is " << *ptr << endl;

    char *c = &ch[0];
    cout << "c is " << c << endl; // prints whole char array unlike int ptr which only prints addr of 1st block
    cout << "*c is " << *c << endl;

    // never do this !!! it's forbidden
    // char *d = "zyx";
    // cout << "d is " << d << endl; // prints whole char array unlike int ptr which only prints addr of 1st block
    // cout << "*d is " << *d << endl;
}