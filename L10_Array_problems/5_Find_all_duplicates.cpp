// leetcode 442

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {

//         vector<int>dupArr;

//         int size = nums.size();
//         sort(nums.begin(), nums.end());

//         int i = 0;
//         while(i<size){
//             int count = 1;
//             for(int j = i+1; j < size; j++){
//                 if(nums[i] == nums[j]){
//                     count++;
//                 }
//                 else{
//                     break;
//                 }
//             }
//             if(count == 2){
//                 dupArr.push_back(nums[i]);
//             }
//             i = i + count;
//         }

//         size = dupArr.size();
//         sort(dupArr.begin(), dupArr.end());
//         return dupArr;
//     }
// };