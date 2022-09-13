// // https://www.codingninjas.com/codestudio/problems/permutations-of-a-string_985254?leftPanelTab=0

// #include <bits/stdc++.h>
// void solve(string str, vector<string> &ans, int i)
// {

//     // base case
//     if (i >= str.length())
//     {
//         ans.push_back(str);
//         return;
//     }

//     // for swapping the character till the last char of the string
//     for (int j = i; j < str.length(); j++)
//     {
//         swap(str[i], str[j]);
//         solve(str, ans, i + 1);

//         // backtrack
//         // swap(str[i], str[j]);
//     }
// }

// vector<string> generatePermutations(string &str)
// {
//     vector<string> ans;
//     int i = 0;
//     solve(str, ans, i);
//     sort(ans.begin(), ans.end());
//     return ans;
// }