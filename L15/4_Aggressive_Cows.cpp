// // https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

// bool isPossibleSolu(vector<int> &stalls, int k, int mid){
//     //there willl be ofc min 1 cow
//     int cowCount = 1;
//     // a position to place k1 cow.
//     int position = stalls[0];

//     for(int i = 0; i < stalls.size(); i++){

//         //for a distance between 2 aggressive cows
//         if(stalls[i] - position >= mid){
//             //placing the cows
//             cowCount++;
//             if(cowCount == k){
//                 return true;
//             }
//             position = stalls[i];
//         }
//     }
//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     //sorting the given array to place cows in the isPossibleSolu function.
//     sort(stalls.begin(), stalls.end());
//     int start = 0;

//     int maxi = -1;
//     for(int i = 0; i < stalls.size(); i++){
//         maxi = max( maxi, stalls[i]);
//     }
//     int end = maxi;

//     int ans = -1;
//     int mid = start + ((end - start)/2);
//     while(start <= end){
//         if( isPossibleSolu(stalls, k, mid)){
//             //storing returned mid in ans.
//             ans = mid;
//             //when possible solu is there then go to right side by increasing start as we have to return the largest min dist.
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//         mid = start + ((end - start)/2);
//     }
//     return ans;
// }