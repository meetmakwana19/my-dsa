#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2; //this operation can lead to error if start and end are very big above int range
    // optimized smart formula
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // if key is on right side
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // else key is on left side
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    cout << "Not found so ";
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};
    cout << "Even array :\n";
    print(even, 6);
    cout << "Odd array :\n";
    print(odd, 5);

    int element;
    cout << "\nEnter element to find in even= ";
    cin >> element;
    int index = search(even, 6, element);

    cout << element << " is at index " << index << endl;

    int element1;
    cout << "\nEnter element to find in even= ";
    cin >> element1;
    int index1 = search(odd, 5, element1);

    cout << element1 << " is at index " << index1 << endl;
}