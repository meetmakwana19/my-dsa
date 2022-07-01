// // leetcode 88

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

//         //coz here vector is there so simple approach can be taken

//         int j = 0;
//         for( int i = m; i < m + n; i++){
//             nums1[i] = nums2[j];
//             j++;
//         }
//         sort(nums1.begin(), nums1.end());
//     }
// };