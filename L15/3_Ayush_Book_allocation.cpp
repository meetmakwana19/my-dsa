// // // https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

// bool isPossibleSolu(vector<int> time, int n, int m, long long mid)
// {
//     long long chaptersCount = 1; // Ayush reads atleast one m chapter in any nth day
//     long long chaptersSum = 0; //to keep track of number of chapters Ayush studies

//     for (int i = 0; i < m; i++)
//     {
//         if (chaptersSum + time[i] <= mid)
//         {
//             chaptersSum += time[i];
//         }
//         else
//         {
//             chaptersCount++;
//             // chaptersCount shouldn't exceed n(max number of days)
//             // or current time[i] shouldn't exceed current mid too for time allocation's success.
//             if (chaptersCount > n || time[i] > mid)
//             {
//                 return false;
//             }
//             chaptersSum = time[i];
//         }
//     }
//     return mid;
// }

// long long ayushGivesNinjatest(int n, int m, vector<int> time)
// {
//     long long start = 0;

//     long long sum = 0;
//     // run loop untill m(total number of days elements in given array)
//     for (int i = 0; i < m; i++)
//     {
//         sum += time[i];
//     }
//     long long end = sum;

//     long long mid = start + ((end - start) / 2);
//     long long ans = -1;
//     while (start <= end)
//     {
//         if (isPossibleSolu(time, n, m, mid))
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         mid = start + ((end - start) / 2);
//     }
//     return mid;
// }