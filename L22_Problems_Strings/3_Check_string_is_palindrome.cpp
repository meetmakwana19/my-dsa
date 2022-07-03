// // https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=1

// char toLowerCase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }

// bool checkPalindrome(string s)
// {
//     // when reverse gives the same palindrome then it is Palindrome

//     int start = 0, end = s.size() - 1;

//     while (start < end)
//     {
//         // 32 is space, 47 is /, 58 is :, 64 is @,
//         if ((s[start] >= 33 && s[start] <= 47) || (s[start] >= 58 && s[start] <= 64) || isspace(s[start]) || (s[start] >= 91 && s[start] <= 96) || (s[start] >= 123))
//         {

//             start++;
//             continue;
//         }
//         if ((s[end] >= 33 && s[end] <= 47) || (s[end] >= 58 && s[end] <= 64) || isspace(s[end]) || (s[end] >= 91 && s[end] <= 96) || (s[end] >= 123))
//         {

//             end--;
//             continue;
//         }
//         if (toLowerCase(s[start]) != toLowerCase(s[end]))
//         {
//             return 0;
//         }
//         else
//         {
//             start++;
//             end--;
//         }
//     }
//     return true;
// }