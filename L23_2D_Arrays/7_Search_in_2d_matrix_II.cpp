// // // leetcode 240
// // // https://leetcode.com/problems/search-a-2d-matrix-ii/

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         //binary search is difficult to apply here as whole matrix is not sorted in uniform fashioon to find a single mid
//         //but can reduce the matrix search space by following approach :

//         int row = matrix.size();
//         int col = matrix[0].size();

//         //2 pointers
//         int rowIndex = 0;
//         int colIndex = col - 1; //starting from last column

//         while(rowIndex < row && colIndex >= 0){

//             //****starting search from upper right corner of matrix
//             int element = matrix[rowIndex][colIndex];

//             if(element == target){
//                 return 1;
//             }

//             if(element < target){
//                 rowIndex++; //go down
//             }
//             else{ //when (element > target)
//                 colIndex--; //do left
//             }
//         }
//         return 0;
//     }
// };