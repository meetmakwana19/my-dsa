#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int key;
    cout << "Enter element to seaarch = ";
    cin >> key;

    if (search(arr, 10, key))
    {
        cout << "Element found.\n";
    }
    else
    {
        cout << "Element not found.\n";
    }
}