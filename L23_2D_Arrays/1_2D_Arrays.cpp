#include <iostream>
using namespace std;

// need to specify the column size of the 2d array while passing it as a parameter
bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void rowWiseSum(int arr[][4], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

void colWiseSum(int arr[][4], int row, int col)
{
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "largestRowSum is " << maxi << " at row number ";
    return rowIndex;
}
int main()
{
    // creating 2d array arr[i][j]
    // int arr[3][4];
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    // cout << "Enter the elements \n";
    // taking input row wise
    // for (int i = 0; i < 3; i++) // i is for row
    // {
    //     for (int j = 0; j < 4; j++) // j is for column
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // taking input column wise
    // for (int i = 0; i < 4; i++) // i is for column**
    // {
    //     for (int j = 0; j < 3; j++) // j is for row**
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    cout << "\n2D Array : \n";
    // to print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "Enter the element to search : ";
    int target;
    // cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found\n";
    }
    else
    {
        cout << "Not found\n";
    }

    cout << "Row wise sum is \n";
    rowWiseSum(arr, 3, 4);

    cout << "\n2D Array2 : \n";
    // to print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Column wise sum is \n";
    // colWiseSum(arr2, 3, 3);
    // colWiseSum(arr, 3, 4);

    cout << largestRowSum(arr, 3, 4) << endl;
}