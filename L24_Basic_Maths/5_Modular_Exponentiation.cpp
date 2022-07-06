// // https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7&leftPanelTab=0

// Ref : https://codeforces.com/blog/entry/72527

// Modular operations reduce the number
// eg. 20! will be a long long number
// so we can return the answer as (20! % m) wherem can be given in constraints sometimes like 10⁹+7.
// #include <bits/stdc++.h>
// int modularExponentiation(int x, int n, int m) {
// 	// TC : O(logn) by using modular operations
//  // normal way of finding x^n will taje O(n) but we will do it by following approach

//     int result = 1;

//     //x^n % m
//     while(n > 0){
//         //odd power n
//         if(n & 1){
//             // type casting longlong as product can go out of int range
//             // in case of odd x, we multiple x once in product
//             // i.e. 2¹¹ = {[2⁽⁵/²⁾]² * 2}
//             result = (1LL * (result) * (x % m)) % m;
//         }
//         //for x² {[2⁽⁵/²⁾]²}
//         x = (1LL * (x % m) * (x % m)) %m;

//         //this is divide by 2
//         //doing operations with bits
//         n = n >> 1; //right shift by 1
//     }
//     return result;
// }