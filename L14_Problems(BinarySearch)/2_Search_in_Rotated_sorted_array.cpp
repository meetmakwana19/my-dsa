// // Search In Rotated Sorted Array
// // https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

// int getPivot(vector<int>& arr, int size)
// {
//     int start = 0, end = size - 1;
//     int mid = start + ((end - start) / 2);

//     while (start < end)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             // on line I, bringing start up
//             start = mid + 1;
//         }
//         else
//         {
//             // on line II, getting end down towards pivot
//             end = mid;
//         }
//         mid = start + ((end - start) / 2);
//     }
//     return start;
// }

// int binarySearch(vector<int>& arr, int s, int e, int key)
// {
//     int start = s;
//     int end = e;
//     // int mid = (start + end) / 2; //this operation can lead to error if start and end are very big above int range
//     // optimized smart formula
//     int mid = start + ((end - start) / 2);

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         // if key is on right side
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         // else key is on left side
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + ((end - start) / 2);
//     }
//     return -1;
// }

// int findPosition(vector<int>& arr, int n, int k)
// {
//     int pivot = getPivot(arr, n);

//     if( k >= arr[pivot] && k <= arr[n-1]){
//         //search in line II.
//         return binarySearch(arr, pivot, n-1, k);
//     }
//     else{
//         //search in line I.
//         return binarySearch(arr, 0, pivot-1, k);
//     }
//     //else returning -1 in binarySearch() only if not found k
// }
