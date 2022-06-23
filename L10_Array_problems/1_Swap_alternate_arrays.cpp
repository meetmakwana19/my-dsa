#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2) // increment i by 2 as after swaping, push i to next to next element for swaping as i+1 got swapped
    {
        // check if the next element is within array size
        if (i + 1 < size)
        {
            // swap(arr[i], arr[i + 1]);
            // swap works internally like following
            int temp = arr[1];
            arr[1] = arr[0];
            arr[0] = temp;
        }
    }
}
int main()
{
    int arr[5] = {1, 4, 6, 8, 9};            // odd case
    int brr[8] = {2, 3, 5, 7, 8, 9, 11, 15}; // even case

    cout << "Before swap :\n";
    printArray(arr, 5);
    printArray(brr, 8);

    swapAlt(arr, 5);
    swapAlt(brr, 8);

    cout << "After alternate swap :\n";
    printArray(arr, 5);
    printArray(brr, 8);
}