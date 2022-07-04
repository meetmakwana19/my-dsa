// https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {
        int count = 0; // to count 1s
        int total = n * m;
        int row;

        //**imp : dont set max as -1
        // as it'll return row number in case of 0 0 0 rows when
        // if(count > maxi) will become true for 0 0 0 case
        // like count=0 and maxi=-1
        // so (0 > -1 )so will be true
        // and return row=i number which we dont want
        int maxi = 0;

        for (int i = 0; i < n; i++)
        {
            count = 0; // to reset for next new row

            for (int j = 0; j < m; j++)
            {

                if (arr[i][j] == 1)
                {
                    count++;
                }
            }

            if (count > maxi)
            {
                maxi = count;
                row = i;
            }
        }
        if (maxi == 0)
        {
            // when no 1 was encountered and whole matrix was of 0s
            // which kept maxi unchanged from it's OG value 0
            return -1;
        }
        else
        {
            return row;
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends