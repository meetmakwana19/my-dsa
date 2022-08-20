#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{

    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1]) // unsorted case
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1); // incrementing the starting location of arr by 1 for the next part.
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {2, 6, 8, 8, 10};
    int size = 5;

    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "\nSorted\n";
    }
    else
    {
        cout << "\nUnsorted\n";
    }
}