// https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0

// #include <bits/stdc++.h>
// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    // Have to return vector of vector
//     vector<vector<int> > ans;

//     //traversing array from 0 to n-1
//     for(int i=0; i < arr.size(); i++){
//         //traversing same array from next element 1 to n-l to compare each i with whole array from i+1 to n-1
//         for(int j=i+1; j < arr.size(); j++){
//             //if found any sum pairs
//             if(arr[i] + arr[j] == s){
//                 //creating new temp vector array
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }