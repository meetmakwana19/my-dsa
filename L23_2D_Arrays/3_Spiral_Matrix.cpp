// // https://leetcode.com/problems/spiral-matrix/
// // leetcode 54

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;

//         int row = matrix.size();
//         int col = matrix[0].size(); //size of any row of matrix will give total no. of cols.

//         int count = 0; //to keep track of how many elements are getting printed
//         int total = row * col ; //total no. of elements

//         //defining indices
//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = row - 1;
//         int endingCol = col - 1;

//         while(count < total){

//             //print starting row
//             for(int i = startingCol; i <= endingCol && count < total; i++){
//                 ans.push_back( matrix[startingRow][i] );
//                 count++;
//             }
//             startingRow++; //to next time print bottom rows

//             //print ending column
//             for(int i = startingRow ; i <= endingRow && count < total; i++){
//                 ans.push_back( matrix[i][endingCol]);
//                 count++;
//             }
//             endingCol--; //to next time print left side columns

//             //print ending row
//             for(int i = endingCol; i >= startingCol && count < total; i--){
//                 ans.push_back( matrix[endingRow][i]);
//                 count++;
//             }
//             endingRow--; //to next time print upper rows

//             //print startingCol
//             for(int i = endingRow; i >= startingRow && count < total; i--){
//                 ans.push_back( matrix[i][startingCol]);
//                 count++;
//             }
//             startingCol++; //to next time print right side columns
//         }
//         return ans;
//     }
// };