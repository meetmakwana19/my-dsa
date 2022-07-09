#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    char ch = 'a';
    cout << sizeof(ch) << endl;

    char *ptr = &ch;
    cout << sizeof(ptr) << endl;

    // dynamic memory allocation of i into heap
    // new int is used to reserve memory in heap
    // int *i is used to point to that int type memory block in the heap from stack
    // new int takes 4bytes, int *i pointer takes 4 bytes
    // therefore, total 8 bytes for this work.
    int *i = new int;
    cout << sizeof(i) << endl;

    // creating aray in heap
    int *arr = new int[5];
    // new int[5] reserved 5 blocks in heap for array size 5 of int datatype
    // int *arr is the pointer pointing to an address in heap which has int array

    // variable size array
    int n;
    cout << "Enter n : ";
    cin >> n;
    int *array = new int[n];

    // taking array input
    cout << "Enter array elements : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int ans = getSum(array, n);
    cout << "Sum of array is " << ans << endl;
}