// // https://leetcode.com/problems/rotate-image/
// // leetcode48

// // faster solution :

// class Solution
// {
// public:
//     void rotate(vector<vector<int>> &matrix)
//     {
//         vector<vector<int>> ans;

//         int row = matrix.size();    // finding no. of rows
//         int col = matrix[0].size(); // finding no. of columns by finding the size of the 0th row(which will give number of elements in 0th row = number of columns)

//         int count = 0;         // to keep track of elements getting inserted
//         int total = row * col; // total number of elements

//         // defining indices
//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = row - 1;
//         int endingCol = col - 1;

//         while (count < total)
//         {

//             // Approach : Return elements by going from bottom to top ↑ ↑ ↑ in each column of the input matrix

//             for (int i = startingCol; i <= endingCol && count < total; startingCol++)
//             // looking through a single vertical column from startingCol till endingCol.
//             {
//                 vector<int> temp; // a 1d array to store elements of single row

//                 for (int j = endingRow; j >= startingRow && count < total; j--)
//                 {
//                     // looking in each row of the same column ↑ from bottom's endingRow uptill top startingRow as the approach is to go from bottom to top in each column.

//                     temp.push_back(matrix[j][startingCol]);
//                     count++;

//                     if (temp.size() == matrix.size())
//                     {
//                         // storing a set of elements when the set = size of a row i.e. if 3 rows are there then 3 elements will be stored to together as 1 group in the '2d array ans'
//                         ans.push_back(temp);
//                     }
//                 }
//             }
//         }
//         // equate the 2d vector ans with input's 2d vector matrix as this is a `void` function.
//         matrix = ans;
//     }
// };

// //slower but smaller solution as follows :

// // class Solution {
// // public:
// //     void rotate(vector<vector<int>>& matrix) {

// //         int n = matrix.size();

// //         for(int i = 0; i < n; i++){
// //             for(int j = 0; j <= i ; j++){
// //                 swap( matrix[i][j], matrix[j][i] );
// //             }
// //         }
// //         for(int i = 0; i < n ; i++){
// //             reverse( matrix[i].begin(), matrix[i].end() );
// //         }
// //     }
// // };