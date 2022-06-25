// // leetcode 69

// class Solution {
// public:
//     int mySqrt(int x) {

//         int start = 0, end = x;
//         long long int mid = start + ((end-start)/2);

//         long long int ans = -1;

//         //start binary search
//         while(start <= end){
//             //using long for higher number products
//             long long int square = mid * mid;

//             if(square == x){
//                 return mid ;
//             }
//             else if(square > x){
//                 end = mid - 1;
//             }
//             else if(square < x){
//                 ans = mid;
//                 start = mid + 1;
//             }
//             mid = start + ((end-start)/2);
//         }
//         return ans;
//     }
// };