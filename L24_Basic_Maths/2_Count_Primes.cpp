// // https://leetcode.com/problems/count-primes/
// // leetcode 204

// class Solution
// {
// public:
//     int countPrimes(int n)
//     {

//         // Approach : Sieve of Eratosthenes algo
//         int count = 0;

//         // creating an array with size of n+1
//         // coz array starts with 0 index, so make of size n+1 i.e. 0 to n
//         // initialized all numbers as true(as prime)
//         vector<bool> prime(n + 1, true);

//         // 0 and 1 are not prime numbers
//         prime[0] = prime[1] = false;

//         for (int i = 2; i < n; i++)
//         {

//             if (prime[i])
//             { // if current number is prime
//                 count++;

//                 // checking if i is in 2s, 3s, 4s,... multiples table
//                 for (int j = i * 2; j < n; j = j + i)
//                 {
//                     prime[j] = 0; // if number is in table, then mark it not prime
//                 }
//             }
//         }
//         return count;
//     }
// };