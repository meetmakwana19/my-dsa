// https://www.codingninjas.com/codestudio/problems/common-elements-present-in-all-rows-of-a-matrix_1118111?leftPanelTab=0

#include <bits/stdc++.h>

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
    int rows = mat.size();
    int cols = mat[0].size();

    int maxi = findMax(mat, rows, cols); // to make a vector of this size
    // int count[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    // to count occurrences of elements of 1st row
    vector<int> count(maxi + 1, 1); // vector starts indexing from 0 so size should be maxi+1 for proper number indexing & counting

    // APPROACH : Save row 0  in 1d temp vector
    // then check each element from row 1 till row N that whether they're present in row 1
    // if yes then increase their count of only signle occurence in row into the count vector
    // then check if any number's count=no. of rows in count vector, if yes then store it in ans!
    // TLE is happening due to I guess Time complexity is coming out to be T(n⁴) as there's isPresent() call inside already an i-j for loop
    // but program gives correct output for any input

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
            // check if current element is present in 1st row which is stored in temp
            if (isPresent(temp, mat[i][j]))
            {
                int element = mat[i][j];
                if (i == count[element]) //**imp to avoid duplicacy of same number in the same row getting counted
                {
                    count[element]++; // increase count if found in row 0.
                }
            }
        }
    }

    // traversing over count array to find which numbers are common
    for (int i = 0; i < count.size(); i++)
    {
        // if any count=total no. of rows means that number occured in all rows
        //&& check is the number is present in 1st row or not
        if (count[i] == rows && isPresent(temp, i))
        {
            ans.push_back(i);
        }
    }
    return ans;
}