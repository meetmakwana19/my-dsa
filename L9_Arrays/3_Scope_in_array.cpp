#include <iostream>
using namespace std;

void updateArr(int arr[], int size)
{
    cout << "\n\nInside update\n";

    // updating/overwriting the value at 0th index
    arr[0] = 10;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nExiting updateArr()\n\n";
}
int main()
{
    int arr[3] = {2, 3, 4};
    cout << "\nOriginal array : \n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    updateArr(arr, 3); // sends the base addr of arr too to update therefore the whole array can get uupdate unlike int which gets copy

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}