#include <iostream>
using namespace std;
void print(int arr[], int start, int end)
{
    cout << "Current size is " << end << endl;
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binary_Search(int arr[], int start, int end, int key)
{
    print(arr, start, end);

    // base condition(element not found)
    if (start > end) // while loop condition
    // K1 TC for this block
    {
        return false;
    }

    int mid = start + ((end - start) / 2);

    // 2nd base case(element found)
    if (arr[mid] == key)
    // K2 TC for this block
    {
        return true;
    }

    else if (arr[mid] > key)
    // (N/2) TC for either for these blocks
    {
        binary_Search(arr, start, mid - 1, key);
    }
    else
    {
        binary_Search(arr, mid + 1, end, key);
    }

    // So TC = K1 + K2 + T(N/2)

    // TC : O(logn)
    // SC : O(logn)
}
int main()
{
    int size;
    cout << "Enter size of the array : ";
    cin >> size;

    int arr[size];
    cout << "Enter elements in sorted order : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key to find : ";
    cin >> key;

    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    if (binary_Search(arr, start, end, key))
    {
        cout << "Found !";
    }
    else
    {
        cout << "Not found";
    }
}