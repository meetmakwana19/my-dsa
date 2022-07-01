#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> arr)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
}

void print(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr;

    arr.push_back(11);
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(12);
    arr.push_back(4);
    print(arr);

    vector<int> ans = reverse(arr);

    print(ans);
}