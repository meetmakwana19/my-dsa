// finding pivot index in a "sorted rotated" array

#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            // on line I, bringing start up
            start = mid + 1;
        }
        else
        {
            // on line II, getting end down towards pivot
            end = mid;
        }
        mid = start + ((end - start) / 2);
    }
    return start;
}
int main()
{
    // "sorted rotated" arrays
    int arr[5] = {8, 10, 17, 1, 3};
    int brr[5] = {3, 8, 10, 17, 1};
    // int crr[6] = {1, 7, 3, 6, 5, 6};

    cout << "Pivot is " << getPivot(arr, 5) << endl;
    cout << "Pivot is " << getPivot(brr, 5) << endl;
    // cout << "Pivot is " << getPivot(crr, 6) << endl;
}