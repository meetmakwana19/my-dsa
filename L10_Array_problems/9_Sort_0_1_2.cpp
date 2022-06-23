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
    // using Dutch National Flag algo woth 3 pointers
    int low = 0;
    int mid = 0;
    int high = (size - 1);

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
    }
}
int main()
{
    int arr[7] = {0, 1, 2, 1, 2, 1, 2};

    cout << "\nOriginal array: \n";
    print(arr, 7);

    sortOne(arr, 7);

    cout << "\nSorted array: \n";
    print(arr, 7);

    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len;
}

// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTab=1

// submitted solution :

#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    //     int length = sizeof(arr) / sizeof(arr[0]);
    // using Dutch National Flag algo woth 3 pointers
    int low = 0;
    int mid = 0;
    int high = (n - 1);

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
    }
    //     return ans;
}