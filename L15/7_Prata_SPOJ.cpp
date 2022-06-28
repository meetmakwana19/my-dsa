// https://www.spoj.com/problems/PRATA/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// this monotic predicate function will check if the mid of the search space(consisting of cooking times) will be a possible time to cook paratas
bool isPossibleTime(vector<int> rank, int m, int mid)
{
    int paratas = 0;
    int cookingTime = 0;

    for (int i = 0; i < rank.size(); i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cookingTime += (j * rank[i]);

            if (cookingTime <= mid)
            {
                paratas++;
            }
            if (paratas >= m)
            {
                return true;
            }
        }
        cookingTime = 0;
    }
    return false;

    // for (int i = 0; i < rank.size(); i++)
    // {
    //     cookingTime = rank[i];
    //     int j = 2;
    //     while (cookingTime <= mid)
    //     {
    //         paratas++;
    //         cookingTime += (rank[i] * j);
    //         j++;
    //     }
    //     if (paratas >= m)
    //     {
    //         return 1;
    //     }
    // }
    // return 0;
}
int minCookingTime(vector<int> rank, int m)
{
    int start = 0;
    int end = 1e8;
    // for (int i = 0; i <= m; i++)
    // {
    //     end += rank[rank.size() - 1] * i;
    // }

    int ans = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (isPossibleTime(rank, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        // mid = start + ((end - start) / 2);
    }
    return ans;
}
int main()
{
    int t, n, m;
    vector<int> rank;
    int element;
    cin >> t; // line one - test cases
    while (t--)
    {
        cin >> m;
        cin >> n; // line two - ordered paratas
        for (int i = 0; i < n; i++)
        {
            cin >> element;
            rank.push_back(element);
        }
        // sort(rank.begin(), rank.end());
        cout << "Array is ";
        for (int i = 0; i < rank.size(); i++)
        {
            cout << rank[i] << " ";
        }
        cout << endl;

        cout << minCookingTime(rank, m) << endl;
    }
}