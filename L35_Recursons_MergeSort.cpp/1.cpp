// fastest sorting algo
// https://www.codingninjas.com/codestudio/problems/merge-sort_920442?leftPanelTab=0
#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + ((e - s) / 2);

    // lenghts of 2 arrs
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creating new arrays
    int *first = new int[len1]; // declares first as a pointer to an array of int type of length len1 to allocate dynamically.
    int *second = new int[len2];

    // copy elements in the new arrays
    int mainArrIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrIndex++];
    }

    mainArrIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrIndex++];
    }

    // indies for new arrays
    int index1 = 0;
    int index2 = 0;
    mainArrIndex = s;
    int inv_count = 0;

    // merge the arrs
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrIndex++] = first[index1++];
            inv_count++;
        }
        else
        {
            arr[mainArrIndex++] = second[index2++];
            inv_count++;
        }
    }
    while (index1 < len1) // for single single condition
    {

        arr[mainArrIndex++] = first[index1++];
        inv_count++;
    }
    while (index2 < len2)
    {
        arr[mainArrIndex++] = second[index2++];
        inv_count++;
    }

    cout << "Invertionn count is " << inv_count << endl;
    // freeing memory after using the pointers dynamically.
    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int s, int e)
{

    // base case
    if (s >= e) // when s>e means arr is empty and when s=e means only 1 element
    {
        return;
    }

    int mid = s + ((e - s) / 2);

    // sort left part
    mergeSort(arr, s, mid);

    // sort right part
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
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
    // int arr[5] = {2, 5, 1, 6, 9};
    int arr[4] = {8, 4, 2, 1};
    int n = 4;

    print(arr, n);

    mergeSort(arr, 0, n - 1);
    // logic :
    // 1. Split the array by recusion
    // 2. Merge it via some logic

    print(arr, n);
    return 0;
}