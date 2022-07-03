// // leetcode443

// class Solution
// {
// public:
//     int compress(vector<char> &chars)
//     {

//         int i = 0;
//         int ansIndex = 0; // to point valid ans in the same input string as we have to give inline solution
//         int n = chars.size();

//         while (i < n)
//         {

//             int j = i + 1; // to get the next element ot ith one for comparison and counting
//             while (j < n && chars[i] == chars[j])
//             { // check adjacent chars are same but also traverse by staying within the limit of n
//                 j++;
//             }
//             // while loop ends when
//             // case 1 : Whole vector got traversed
//             // case 2 : Diff char got encountered

//             // storing oldChar
//             chars[ansIndex++] = chars[i];

//             int count = j - i; // counting number of occurences of oldChar

//             if (count > 1)
//             {
//                 string cnt = to_string(count); // conversion of int to string for saving the number as it is in the chars vector
//                 for (char ch : cnt)
//                 {                           // ch = cnt
//                     chars[ansIndex++] = ch; // saving the ch by overwriting the ch with string cnt
//                 }
//             }
//             // moving to next diff char
//             i = j;
//         }
//         return ansIndex; // returning the new length of the array
//     }
// };