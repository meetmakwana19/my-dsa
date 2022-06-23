// // https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTab=0

// // My wrong approach

// // #include <bits/stdc++.h>
// // vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

// //     vector<vector<int>>ans;
// //     vector<int>temp;

// //     for(int i=0; i < arr.size()-2; i++){
// //         for(int j=i+1; j < arr.size()-1; j++){
// //             for(int k=j+1; k < arr.size(); k++){
// //                 temp.clear();
// //                 if(arr[i] + arr[j] + arr[k] == K){
// //                     temp.push_back(arr[i]);
// //                     temp.push_back(arr[j]);
// //                     temp.push_back(arr[k]);
// //                 }
// //                 if(temp.size()!=0){
// //                     ans.push_back(temp);
// //                 }
// //             }
// //         }
// //     }
// //     return ans;
// // }

// // Correct approach from youtube comment

// #include <bits/stdc++.h>
// vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
// 	// Write your code here.
//     vector<vector<int>>ans;
//     sort(arr.begin(),arr.end());
//     int left,right;
//     for(int i=0;i<n-2;i++)
//     {
//         left=i+1;
//         right=n-1;
//         while(left<right)
//         {
//             if(arr[left]+arr[right]+arr[i]==K)
//             {
//                 ans.push_back({arr[i],arr[left],arr[right]});
//                 int x=arr[left];
//                 int y=arr[right];
//                 while(left<right && arr[left]==x)
//                 {
//                     left++;
//                 }
//                 while(left<right && arr[right]==y)
//                 {
//                     right--;
//                 }
//             }
//             else if(arr[left]+arr[right]+arr[i]<K)
//             {
//                 left++;
//             }
//             else
//             {
//                 right--;
//             }
//         }
//         while(i+1<n && arr[i]==arr[i+1])
//         {
//             i++;
//         }
//     }
//     return ans;
// }