#include <iostream>
using namespace std;

void printArray(int arrName[], int size)
{
    cout << "\nPrinting the array.\n";
    // size = 100;
    for (int i = 0; i < size; i++)
    {
        cout << arrName[i] << " ";
    }
    cout << "Printing done.\n\n";
}
int main()
{
    // initializing all blocks of whole array with this zero value.
    int arr[100] = {0};

    // not possible to initialize all blocks with 1, try running.
    // int arr[100] = {1};

    // cout << arr;

    // cout << "Printing the array.\n";
    // int n = 100;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    printArray(arr, 50);

    // initializing starting 3 positions with these value
    int arr1[50] = {2, 3, 4};
    printArray(arr1, 50);

    // sizeof(arr1) will give size in bytes, 50*4bytes int = 200bytes
    int lenArr1 = sizeof(arr1) / sizeof(int);
    cout << "Length of arr1 is " << lenArr1 << endl;
}