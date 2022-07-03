// // Leetcode 567

// class Solution {
// private:
//     bool checkEqual( int a[26], int b[26]){
//         for(int i = 0; i < 26; i++){
//             if(a[i] != b[i])
//                 return false;
//         }
//         return true;
//     }
// public:
//     bool checkInclusion(string s1, string s2) {

//         //permutation of ab is ba

//         // assuming this logic :
//         // [0,0,0,............,0] zero values initialized to count occurences
//         // [a,b,c,............,z]
//         //  ↑ ↑ ↑              ↑
//         // [0,2,3,............,25] Index of 26 alphabetes.
//         int arr[26] = {0}; //character count array

//         for(int i = 0; i < s1.length(); i++){
//             int numIndex = s1[i] - 'a'; //finding the index for arr by ASCII codes ch
//             arr[numIndex]++; //incrementing the count of that ch
//         }

//         //traversing s2 string with window size of s1.length
//         int i = 0;
//         int windowSize = s1.length();
//         int arr2[26] = {0};

//         //setting 1st window
//         while(i < windowSize && i < s2.length()){
//             int numIndex = s2[i] - 'a';
//             arr2[numIndex]++;
//             i++;
//         }

//         //check if the 1st window has got permutation
//         if(checkEqual(arr, arr2)){
//             return 1;
//         }

//         //process the next window like 'ab' ahead by traversing thorugh whole s2

//         //for 2nd window and so on..........
//         while( i < s2.length()){
//             char newChar = s2[i]; //a new char in the window coming from right side
//             int numIndex = newChar - 'a';
//             arr2[numIndex]++;

//             char oldChar = s2[i - windowSize]; // oldChar leaving window from left side
//             numIndex = oldChar - 'a';
//             arr2[numIndex]--;

//             i++;

//             //checking permutation
//             if(checkEqual(arr, arr2)){
//                 return 1;
//             }
//         }
//         return 0;
//     }
// };