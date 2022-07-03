// // leetcode1047

// class Solution {
// public:
//     string removeDuplicates(string s) {
//         string ans; //to return the ans
//         int ptr = 0;

//         for(int i = 0; i < s.length(); i++){
//             //if the answer string is empty or last character of the ans is not matching with current char of string
//             if(ptr == 0 || s[i] != ans[ptr - 1]){
//                 ans.push_back(s[i]); //keep that char as it is and store it in the ans
//                 ptr++;
//             }
//             else{
//                 ans.pop_back(); //removing the duplicate char
//                 ptr--;
//             }
//         }
//         return ans;
//     }
// };

// better understanding one

// class Solution {
// public:
//     string removeDuplicates(string s) {

//         string ans = ""; //answer stack which will be returned

//         for(int i = 0; i < s.length(); i++){

//             //ans.size()>0 i.e. we have atleast one char in answer stack
//             if(ans.size() > 0 && s[i] == ans.back()){
//                 //if last back char of ans is same with current ith char then remove it by popping
//                 ans.pop_back();
//             }
//             else{
//                 ans.push_back(s[i]);
//             }
//         }
//         return ans;
//     }
// };

// another solution but with highest TC

// class Solution {
// public:
//     string removeDuplicates(string s) {

//         int n = s.size();
//         int i = 0;
//         while(i < n){
//             if(s[i] == s[i+1]){
//                 s.erase(i, 2);
//                 if(i > 0){
//                     i--; //shifting i back before we found same element.
//                 }
//                 n = n - 2; //reducing final number of elements in array after erase
//             }
//             else{
//                 i++;
//             }
//         }
//         return s;
//     }
// };