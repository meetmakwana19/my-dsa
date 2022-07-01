#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0; // for arr1 pointing
    int j = 0; // for arr2 pointing
    int k = 0; // for arr3 poiting

    // traverse till the indexes are inside the arrays
    while (i < n && j < m)
    {
        // deciding part
        if (arr1[i] < arr2[j])
        {
            // arr3[k++] = arr1[i++];
            // or
            arr3[k] = arr1[i]; // put smaller value of arr1 into new arr3
            k++;
            i++;
        }
        // when arr2 has smaller element
        else
        {
            // arr3[k++] = arr2[j++];
            arr3[k] = arr2[j]; // put smaller value of arr2 into new arr3
            k++;
            j++;
        }
    }

    // copy the arr1 elements into new arr3
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int nums1[5] = {1, 3, 5, 7, 9};
    int nums2[3] = {2, 4, 6};

    int nums3[8] = {0};

    print(nums1, 5);
    print(nums2, 3);

    merge(nums1, 8, nums2, 3, nums3);

    print(nums3, 8);
}