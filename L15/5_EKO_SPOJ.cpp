// https://www.spoj.com/problems/EKO/

#include <iostream>
#include <vector>
using namespace std;
// to turn all int datatypes into `long long int`
#define int long long int // makes every 32 bit(4 bytes) integer a 8 bytes integer

bool isWoodSufficient(vector<int> treeHeights, int n, int m, int mid)
{
    int cutOffWoodSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (treeHeights[i] > mid)
        {
            // cutting tree from mid and remainig adding to cutOffWoodSum
            //  i.e. wood = treeHeights[i] - mid
            //  then cutOffWoodSum = cutOffWoodSum + wood
            cutOffWoodSum += (treeHeights[i] - mid);
        }
        // if cutOffWoodSum is more than required m wood then send that possible solution back.
    }
    if (cutOffWoodSum >= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int maxHeight(vector<int> &treeHeights, int n, int m)
{
    int start = 0;

    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, treeHeights[i]);
    }
    int end = maxi;

    int mid = start + ((end - start) / 2);

    int ans = -1;
    while (start <= end)
    {
        if (isWoodSufficient(treeHeights, n, m, mid))
        {
            ans = mid;
            // bring the start up as we will cut more than the mid only
            start = mid + 1;
        }
        // when cutOffWoodSum < required m wood
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

// template <typename S>
// ostream &operator<<(ostream &os,
//                     const vector<S> &vector)
// {
//     // Printing all the elements
//     // using <<
//     for (auto element : vector)
//     {
//         os << element << " ";
//     }
//     return os;
// }

int32_t main()
{
    // number of trees
    int n;
    // cout << "\nEnter number of trees = n = ";
    cin >> n;

    // wood requirement
    int m;
    // cout << "\nEnter wood requirement = m = ";
    cin >> m;

    // declaring a dynamic vector array to store heights of trees which are in a single row for Mirko to cut
    vector<int> treeHeights;
    // cout << "\nEnter array of trees = ";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        treeHeights.push_back(element);
    }
    // cout << "[";
    // cout << treeHeights << "";
    // cout << "]";

    // cout << "\nMax height of blade should be " << maxHeight(treeHeights, n, m) << endl;
    cout << maxHeight(treeHeights, n, m);
    return 0;
}