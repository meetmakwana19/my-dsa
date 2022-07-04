// https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int median(vector<vector<int>> &matrix, int r, int c)
    {
        vector<int> temp;

        int count = 0;
        int total = r * c;

        while (count < total)
        {
            for (int i = 0; i < r && count < total; i++)
            {
                for (int j = 0; j < c && count < total; j++)
                {
                    temp.push_back(matrix[i][j]);
                    count++;
                }
            }
        }
        sort(temp.begin(), temp.end());

        int n = temp.size();

        int median = temp[n / 2]; // correct formula

        // if(n&1){
        //     //if n is odd
        //     // median = ( temp[(n-1)/2] + temp[(n+1)/2] ) / 2;
        //     median = (temp[n/2] + temp[(n/2) + 1]) / 2;
        // }
        // else{
        //     //if n is even
        //     median = temp[n/2];
        // }

        return median;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                cin >> matrix[i][j];
        Solution obj;
        cout << obj.median(matrix, r, c) << endl;
    }
    return 0;
} // } Driver Code Ends