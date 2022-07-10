#include <iostream>
using namespace std;

// void print(int arr[], int size, int start )
void print(int arr[], int size, int start = 0) // assumed start as defualt by defining it as zero
// ****imp : always  start defining default arguements from the RHS to LHS and never from LHS or middle
{
    for (int i = start; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    print(arr, size, 3);

    // lets keep 3rd argument of start as optional
    cout << "\nUsing default argument\n";
    print(arr, size);
}