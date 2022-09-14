// // Leetcode 17
// // https://www.codingninjas.com/codestudio/problems/letter-combinations-of-a-phone-number_983623?leftPanelTab=1

// class Solution {
// private:
//     void solve(string digits, string output, int i, vector<string>& ans, string mapping[]){

//         //base case - when i goes beyond the i/p
//         if(i >= digits.length()){
//             ans.push_back(output);
//             return;
//         }

//         int num = digits[i] - '0';
//         //subtracting 0 to get an integer as digits[i] will give a char

//         string alphabets = mapping[num];

//         for(int j = 0; j < alphabets.length(); j++){
//             output.push_back(alphabets[j]);
//             solve(digits, output, i+1, ans, mapping);

//             //backtracking
//             output.pop_back();
//         }
//     }
// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;

//         if(digits.length() == 0){
//             return ans;
//         }

//         string output = "";
//         int i = 0;

//         string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

//         solve(digits, output, i, ans, mapping);

//         return ans;
//     }
// };