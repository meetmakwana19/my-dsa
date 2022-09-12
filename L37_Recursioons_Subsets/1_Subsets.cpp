// // leetcode78
// // https://www.codingninjas.com/codestudio/problems/find-all-subsets_2041970?leftPanelTab=1

// class Solution {
// private:
//     void solve(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans){

//     //base case
//     if(index >= arr.size()){
//         //this is the ending where including and excluding is finished so add it to ans
//         ans.push_back(output);
//         return ;
//     }

//     //exclude call - no need to change output, just increment i
//     solve(arr, output, index+1, ans);

//     //include call - the element is included
//     int element = arr[index];
//     output.push_back(element);
//     solve(arr, output, index+1, ans);

// }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> output;

//         int index = 0;

//         solve(nums, output, index, ans);

//         return ans;
//     }
// };