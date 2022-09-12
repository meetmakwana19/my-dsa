// // https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087

// void solve(string str, string output, int i, vector<string> &ans)
// {

//     // base case
//     if (i >= str.length())
//     {
//         if (output.length() > 0)
//         {
//             ans.push_back(output);
//         }
//         return;
//     }

//     // exclude call
//     solve(str, output, i + 1, ans);

//     // include call
//     int element = str[i];
//     output.push_back(element);
//     solve(str, output, i + 1, ans);
// }
// vector<string> subsequences(string str)
// {

//     vector<string> ans;
//     string output = "";
//     int i = 0;
//     solve(str, output, i, ans);

//     return ans;
// }
