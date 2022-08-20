#include <iostream>
#include <vector>
using namespace std;

int arrSum(int arr[], int size)
{

    // base condition
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    int ans = arr[0] + arrSum(arr + 1, size - 1);
    return ans;
}
int main()
{
    // vector<int> arr;

    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        // int k;
        // cin >> k;
        // arr.push_back(k);
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Sum is " << arrSum(arr, size) << endl;
}