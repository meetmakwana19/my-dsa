// // https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650

// npt optimized yet, will need DP
// int countDistinctWayToClimbStair(long long nStairs)
// {
//     //base case
//     if(nStairs < 0){
//         return 0;
//     }
//     if(nStairs == 0){
//         return 1;
//     }

//     //recursive relation
//     int ans = countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2);

//     return ans;
// }