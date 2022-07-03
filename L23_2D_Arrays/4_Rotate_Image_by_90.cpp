#include <iostream>
#include <vector>
using namespace std;

vector<int> rotate(vector<vector<int>> &matrix)
{
    cout << "Inside rotate()\n";
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    // defining indices
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {

        for (int i = startingCol; i <= endingCol && count < total; startingCol++)
        {
            for (int j = endingRow; j >= startingRow && count < total; j--)
            {
                ans.push_back(matrix[j][startingCol]);
                count++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = rotate(matrix);
    for (auto i : ans)
        std::cout << i << ' ';
}
