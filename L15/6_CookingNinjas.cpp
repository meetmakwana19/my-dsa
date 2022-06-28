// // https://www.codingninjas.com/codestudio/problems/cooking-ninjas_1164174?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1

// bool minPossibleTime(vector<int> &rank, int m, int mid)
// {
//     int dishesDone = 0;
//     int time = 0; // time taken by a cook to make one dish

//     // iterating over all ranks
//     for (int i = 0; i < rank.size(); i++)
//     {

//         // for a Rth ranked cook
//         for (int j = 1; j <= m; j++)
//         {

//             // for a Rth ranked cook, time taken to cook a dish
//             time += (rank[i] * j);

//             // when time taken is less than the mid
//             if (time <= mid)
//             {
//                 // means a dish got completed so increase and count that dish.
//                 dishesDone++;
//             }
//             // if the dishesDone excees or equals the required dishes
//             if (dishesDone >= m)
//             {
//                 return true;
//             }
//         }
//         // set back the time to 0 for next cook
//         time = 0;
//     }
//     return false;
// }

// int minCookTime(vector<int> &rank, int m)
// {
//     // thinking time as a search space

//     int start = 0, end = 0;
//     // int end = 1e8; //if dont understand where to set end then set it as 10^8
//     for (int i = 1; i <= m; i++)
//     {
//         end += rank[rank.size() - 1] * i;
//     }

//     int mid = start + ((end - start) / 2);

//     int ans = 0;
//     while (start <= end)
//     {
//         if (minPossibleTime(rank, m, mid))
//         {
//             ans = mid;     // storing that current mid in ans.
//             end = mid - 1; // if it is getting in this eg 20mins then it can be done in 19mis too so to minimize time, decreasing search soace by bring end down and going in left side of search space.
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + ((end - start) / 2);
//     }
//     return ans;
// }
