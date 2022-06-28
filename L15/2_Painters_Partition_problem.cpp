// // https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0.

// bool isPossibleSolu(vector<int> &boards, int n, int k, int mid){
//     int paintersCount = 1;
//     int boardsSum = 0;

//     for(int i = 0; i < n; i++){
//         if( boardsSum + boards[i] <= mid ){
//             boardsSum += boards[i];
//         }
//         else{
//             paintersCount++;
//             if( paintersCount > k || boards[i] > mid ){
//                 return false;
//             }
//             boardsSum = boards[i];
//         }
//     }
//     return true;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int n = boards.size();
//     int start = 0;

//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += boards[i];
//     }

//     int end = sum;
//     int mid = start + ((end - start)/2);

//     int ans = -1;
//     while(start<=end){
//         if(isPossibleSolu(boards, n, k, mid)){
//             ans = mid;
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//         mid = start + ((end-start)/2);
//     }
//     return mid;
// }