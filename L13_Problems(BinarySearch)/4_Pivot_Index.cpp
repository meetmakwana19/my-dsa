// // leetcode 724

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {

//         int sum = 0;

//         for( int i = 0; i < nums.size(); i++){
//             //finding sum of all elements in the array
//             sum = sum + nums[i];
//         }

//         //creating two pointers for element values
//         int left = 0;
//         int right = sum;

//         for( int i = 0; i < nums.size(); i++){

//             //trying to find pivot by decreasing right from right towards pivot and increasing left towards pivot if left==right.

//             right = right - nums[i];

//             if( left == right ){
//                 return i;
//             }
//             else{
//                 left = left + nums[i];
//             }
//         }
//         return -1;
//     }
// };