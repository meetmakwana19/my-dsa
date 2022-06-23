#include <iostream>
using namespace std;

int getMax(int num[], int size)
{

    // starting with min_int value at dummy max varible
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }

        // better way
        maxi = max(maxi, num[i]);
    }
    return maxi;
}
int getMin(int num[], int size)
{

    // starting with max_int value at dummy min varible
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
        mini = min(mini, num[i]);
    }
    return mini;
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

    cout << "Min value is " << getMin(num, size) << endl;
    cout << "Max value is " << getMax(num, size) << endl;

    cout << "Length of array is " << sizeof(num) / sizeof(int);
}