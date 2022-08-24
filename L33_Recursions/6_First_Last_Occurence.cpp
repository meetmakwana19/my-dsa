#include <iostream>
using namespace std;

int firstOcc(int arr[], int start, int end, int key)
{
    // base condition
    if (start > end)
    {
        return -1;
    }

    int mid = start + ((end - start) / 2);

    // mid element should be = to key
    // but also either mid should be 1st element or key should be greater than it's previous element
    // for 1st occurence condition.
    if (arr[mid] == key && (mid == 0 || arr[mid - 1] < key))
    {
        return mid;
    }
    // **IMP : first check if mid element is on left of key
    else if (arr[mid] < key)
    {
        // search in right part
        firstOcc(arr, mid + 1, end, key);
    }
    else
    {
        // search in left part
        firstOcc(arr, start, mid - 1, key);
    }
    // return ans;
}

int lastOcc(int arr[], int start, int end, int key)
{
    // base condition
    if (start > end)
    {
        return -1;
    }

    int mid = start + ((end - start) / 2);

    // either mid=size(means arr end) or key should be on left of it's next higher number
    if ((mid == end + 1 || key < arr[mid + 1]) && arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        // search in left part
        lastOcc(arr, start, mid - 1, key);
    }
    else
    {
        // search in right part
        lastOcc(arr, mid + 1, end, key);
    }
}

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];
    cout << "Enter elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to find it's occurence : ";
    cin >> key;

    int start = 0;
    int end = size - 1;

    cout << "First occurence of " << key << " is at index " << firstOcc(arr, start, end, key) << endl;
    cout << "Last occurence of " << key << " is at index " << lastOcc(arr, start, end, key);
}