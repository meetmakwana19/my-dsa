#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout << "Enter size for array = ";
    cin >> size;

    // initializing array with 100 size
    int num[100];

    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cout << "Insert element in array = ";
        cin >> num[i];
    }

    cout << "Sum of all elemennts if " << getSum(num, size);
}