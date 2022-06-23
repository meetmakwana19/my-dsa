#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

void sortOne(int arr[], int size)
{
    int left = 0, right = size - 1;

    while (left < right)
    {
        // if left pointer is 0 then dont do anything, just increment
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        // if right pointer is 1 then dont do anything, just decrement
        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    int arr[8] = {0, 1, 0, 1, 1, 1, 0, 1};
    sortOne(arr, 8);

    cout << "\nSorted array: \n";
    print(arr, 8);
}