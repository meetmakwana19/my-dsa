#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}
void update(int *p)
{
    int *ptemp;
    ptemp = p + 1;
    cout << "p after update inside func :  " << ptemp << endl;
    *p = *p + 1;
    cout << "p after update inside func :  " << *p << endl;
}

// int getSum(int arr[], int n)
int getSum(int *arr, int n)
// int arr[] or int *arr both are same
// when arr is passed, it comes as pointer in functions and pointer points to original array
{
    cout << "Size of arr : " << sizeof(arr) << " this is pointer size." << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i[arr];
    }
    return sum;
}
int main()
{
    int value = 5;
    int *p = &value;

    // passing pointer as parameter
    print(p);

    cout << "\nBefore update " << *p << endl;
    cout << "Before update " << p << endl;
    update(p);
    // but value can be updated as the passed pinter points to original block
    cout << "After update " << *p << endl;
    // address can't be updated
    cout << "After update " << p << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    // arr goes as pointer in function
    // benefit is that we can pass some part of arr too
    cout << getSum(arr, 5) << endl;
    // passing arr from index 2 and that small size 3
    cout << getSum(arr + 2, 3) << endl;
}