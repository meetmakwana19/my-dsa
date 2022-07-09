#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter rows : ";
    cin >> row;

    int **arr = new int *[row]; // defining row pointers for 2d jaggered array
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[row]; // defining columns for each ith row
    }

    int *sizes = new int[row];

    cout << "Create jagged array : \n";
    for (int i = 0; i < row; i++)
    {
        cout << "Enter sub-array's size : ";
        cin >> sizes[i];            // putting the input in sizes array
        arr[i] = new int[sizes[i]]; // created the sub-array of size sizes[i]
    }

    // taking elements input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    delete[] sizes;
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}