// https://www.codingninjas.com/codestudio/problems/quick-sort_983625?leftPanelTab=0

#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{

    // taking ppivot as the starting element
    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

    // placing pivot at it's correct position
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    // sorting left and right element around pivotIndex
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) // checking condition once again
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quicksort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // for partition
    int p = partition(arr, s, e);

    // left part sorting
    quicksort(arr, s, p - 1);

    // right part sorting
    quicksort(arr, p + 1, e);
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;

    print(arr, n);

    // logic :
    // 1. Partition around a chosen pivot.
    // 2. Sort left and right parts around pivot.
    quicksort(arr, 0, n - 1);

    print(arr, n);
}