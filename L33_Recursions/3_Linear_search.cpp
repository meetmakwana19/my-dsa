#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    cout << "Current size is " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool linear_search(int arr[], int size, int key)
{
    // print(arr, size);

    // base condition
    if (size == 0)
    {
        return false;
    }

    // processing
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        // recursive relation
        linear_search(arr + 1, size - 1, key);
    }
}
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];
    cout << "Enter elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key to find : ";
    cin >> key;

    if (linear_search(arr, size, key))
    {
        cout << "Key is present ";
    }
    else
    {
        cout << "Not present";
    }
}