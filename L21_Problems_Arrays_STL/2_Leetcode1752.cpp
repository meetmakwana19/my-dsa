// class Solution
// {
// public:
//     bool check(vector<int> &nums)
//     {

//         // Logic - ideally, for TRUE arrays, only 1 pair exists which satisfy condition nums[i-1]>nums[i]......But if there's more than 1 means the array is FALSE

//         int count = 0; // to count for pairs
//         int n = nums.size();

//         // int i = 1 as comparison starts from i-1
//         for (int i = 1; i < n; i++)
//         {

//             // to count only when a pair is found which is like 7>1 in [3,5,7,1,6]
//             if (nums[i - 1] > nums[i])
//             {
//                 count++;
//             }
//         }

//         // to check that one last condition for 1st and last elements like 5>1 for [1,2,3,4,5] as previous for loop breaks at i<n and there's [i-1] condn.
//         if (nums[n - 1] > nums[0])
//         {
//             count++;
//         }

//         // count = 0 for eg like [1,1,1] so return TRUE whem count is not only equal to 1 but less than equal to one
//         return count <= 1;
//     }
// };