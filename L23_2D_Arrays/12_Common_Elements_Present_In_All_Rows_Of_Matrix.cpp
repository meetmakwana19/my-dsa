// https://www.codingninjas.com/codestudio/problems/common-elements-present-in-all-rows-of-a-matrix_1118111?leftPanelTab=0

#include <iostream>
#include <vector>
using namespace std;

bool isPresent(vector<int> arr, int key)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int findMax(vector<vector<int>> mat, int N, int M)
{
    int maxi = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (mat[i][j] > maxi)
            {
                maxi = mat[i][j];
            }
        }
    }
    return maxi;
}

vector<int> findCommonElements(vector<vector<int>> &mat)
{
    cout << "Running.." << endl;
    int rows = mat.size();
    int cols = mat[0].size();

    int maxi = findMax(mat, rows, cols); // to make a vector of this size
    // int count[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    // to count occurrences of elements of 1st row
    vector<int> count(maxi + 1, 1); // vector starts indexing from 0 so size should be maxi+1 for proper number indexing & counting

    vector<int> temp;
    vector<int> ans;

    // traversing from 0th col till last col
    for (int i = 0; i < cols; i++)
    {
        temp.push_back(mat[0][i]); // storing all the elements of 1st row (0th row)
    }

    // traversing from next row(i=1 row)
    for (int i = 1; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "\ncurrent element is " << mat[i][j];
            // check if current element is present in 1st row which is stored in temp
            if (isPresent(temp, mat[i][j]))
            {
                cout << " found true";
                int element = mat[i][j];
                if (i == count[element])
                {
                    cout << " Incrementing " << count[element];
                    count[element]++; // increase count if found in row 0.
                    // count[element] = count[element] + 1; // increase count if found in row 0.
                    cout << " ..Done = " << count[element] << endl;
                }
            }
        }
    }
    for (int i = 0; i < count.size(); i++)
    {
        cout << "\ncount element at i=" << i << " is " << count[i] << endl;
        if (count[i] == rows && isPresent(temp, i))
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> mat = {{13, 15, 13, 20, 0},
                               {13, 13, 1, 15, 20},
                               {15, 20, 13, 1, 13},
                               {13, 15, 17, 13, 20}};
    // vector<vector<int>> mat = {0};
    // vector<vector<int>> mat = {{1, 4, 5, 6},
    //                            {3, 4, 5, 6},
    //                            {5, 6, 7, 2}};

    vector<int> ans = findCommonElements(mat);
    cout << "ans is : \n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}