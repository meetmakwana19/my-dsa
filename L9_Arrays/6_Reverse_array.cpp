#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 4, 8, 5, -2, 14};
    int brr[5] = {3, 6, 7, 9, 11};

    cout << "Before reverse :\n";
    printArray(arr, 6);
    printArray(brr, 5);

    reverse(arr, 6);
    reverse(brr, 5);

    cout << "After reverse :\n";
    printArray(arr, 6);
    printArray(brr, 5);
}