#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            // to store 1st occurence
            ans = mid;
            // to search 1st occurence, obviously will search in the left part of mid by bring end down.
            // go tot left
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            // go to right
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            // go to left
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    // return back the first occurence
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            // to store last occurence
            ans = mid;
            // to search last occurence, obviously will search in the right part of mid by bring start up ahead
            // go to right
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            // to go to right part
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            // go to left
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    // return back the last occurence
    return ans;
}

int main()
{
    // given array is sorted *************
    int arr[8] = {1, 2, 2, 2, 2, 2, 4, 5};

    cout << "First occurence is at " << firstOcc(arr, 8, 2) << endl;
    cout << "Last occurence is at " << lastOcc(arr, 8, 2) << endl;
}