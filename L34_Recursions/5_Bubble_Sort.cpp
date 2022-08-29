#include <iostream>
using namespace std;
void sortArray(int arr[], int n)
{

    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    // solved 1 case where searching will be till n-1
    // will put largest element in the end
    for (int i = 0; i < n - 1; i++)
    // bubble sort logic :
    // at ith round, the ith largest element will be sorted at it's correct place(n-i place)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // recursive call
    sortArray(arr, n - 1);
}
int main()
{
    int arr[5] = {2, 5, 1, 6, 9};

    sortArray(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}