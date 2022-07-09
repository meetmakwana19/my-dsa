#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "\nEnter row : ";
    cin >> row;

    int col;
    cout << "\nEnter columns : ";
    cin >> col;

    int **arr = new int *[row]; // first make an array of rows having pointers
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col]; // for every row, expand the array to make columns
        // eg : 4 rows, 3 cols
        // arr[0] -> having 3 columns means 0 1 2
        // arr[1] -> having 3 columns means 0 1 2
        // arr[2] -> having 3 columns means 0 1 2
        // arr[3] -> having 3 columns means 0 1 2
    }
    cout << "Enter values : \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i]; // deleting each columns of each ith row one by one
    }
    // then at the end release the pointers array
    delete[] arr;
}