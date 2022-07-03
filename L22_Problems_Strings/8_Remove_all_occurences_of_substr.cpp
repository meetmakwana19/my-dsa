// // leetcode 1910

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {

//         //find() returns the first occurrence of sub-string
//         while( s.length() != 0 && s.find(part) < s.length()){

//             //erase from startig index to the length of part
//             s.erase(s.find(part), part.length());
//         }
//         return s;
//     }
// };