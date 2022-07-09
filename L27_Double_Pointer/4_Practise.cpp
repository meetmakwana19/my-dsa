#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    int arr2[] = {11, 12, 13, 14};
    cout << *(arr2) << " " << *(arr2 + 1) << endl;

    int arr3[6] = {11, 12, 13};
    cout << arr3 << " " << &arr3 << &arr3[0] << endl;
    cout << (arr3 + 1) << endl;

    int *p = arr3;
    cout << p[2] << endl;

    int arr4[] = {11, 12, 13, 14, 15};
    cout << *(arr4) << " " << *(arr4 + 3);

    int arr5[] = {11, 21, 31, 41};
    // int *p5 = (arr5)++; //update in symbol table is impossible !
    // cout << *p5 << endl;
    // error output
}