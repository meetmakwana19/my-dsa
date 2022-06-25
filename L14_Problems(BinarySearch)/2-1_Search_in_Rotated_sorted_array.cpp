// // Search In Rotated Sorted Array
// // https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

// // little compact solution but slight better too

// int findPosition(vector<int>& arr, int n, int k)
// {
//     int start = 0, end = n-1;

//     while( start <=end ){
//         int mid = start + ((end-start)/2);

//         if(arr[mid] == k){
//             return mid;
//         }
//         else if(arr[mid] >= arr[0]){
//             //left side(line I of pivoted array graph)
//             if( k >= arr[start] && k < arr[mid]){
//                 end = mid - 1;
//             }
//             else{
//                 start = mid + 1;
//             }
//         }
//         else{
//             //right side( line II of pivoted sorted array)
//             if(k > arr[mid] && k <= arr[end]){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }
//     }
//     return -1;
// }
