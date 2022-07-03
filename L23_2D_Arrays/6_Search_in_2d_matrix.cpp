// // leetcode74
// // https://leetcode.com/problems/search-a-2d-matrix/

// TC : O(log(row*col))

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         //binary search can be applied as the elements are sorted

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int start = 0;
//         int end = (row * col) - 1;
//         int mid = start + ((end-start)/2);

//         while(start <= end){

//             //finding which element is there at mid
//             //mid/col will give at which row mid is. eg. mid 6/4=1 means i=1 row
//             //mid%col will give at which column mid is. eg. 6%4=2 means j=2 column
//             //therefore element at [1][2] will come to be 16 wrt given example.
//             int element = matrix[mid/col][mid%col];  //when done mod the value wil be between 0 to col-1
//             if(element == target){
//                 return 1;
//             }
//             if (element < target){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//             mid = start + ((end-start)/2);
//         }
//         return 0;
//     }
// };