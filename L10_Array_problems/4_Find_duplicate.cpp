// // Duplicate In Array
// // https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397

// int findDuplicate(vector<int> &arr)
// {
//     // Write your code here
// 	int ans = 0;

// XOR of all elements between [0, N-1]
//     for(int i = 0; i<arr.size(); i++){
//         ans = ans^arr[i];
//     }

// XOR of all elements between [1, N-1]
//     for(int i = 1; i<arr.size(); i++){
//         ans = ans^i;
//     }

//     return ans;
// }
