// // https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1

// int firstOcc(vector<int> &arr, int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + ((end - start) / 2);
//     int ans = -1;

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             // to store 1st occurence
//             ans = mid;
//             // to search 1st occurence, obviously will search in the left part of mid by bring end down.
//             // go tot left
//             end = mid - 1;
//         }
//         else if (key > arr[mid])
//         {
//             // go to right
//             start = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             // go to left
//             end = mid - 1;
//         }
//         mid = start + ((end - start) / 2);
//     }
//     // return back the first occurence
//     return ans;
// }

// int lastOcc(vector<int> &arr, int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + ((end - start) / 2);
//     int ans = -1;

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             // to store last occurence
//             ans = mid;
//             // to search last occurence, obviously will search in the right part of mid by bring start up ahead
//             // go to right
//             start = mid + 1;
//         }
//         else if (key > arr[mid])
//         {
//             // to go to right part
//             start = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             // go to left
//             end = mid - 1;
//         }
//         mid = start + ((end - start) / 2);
//     }
//     // return back the last occurence
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
// {
//     // need to send back a pair of 1st and last occurence
//     pair<int, int> result;
//     // Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heterogeneous objects as a single unit.

//     result.first = firstOcc(arr, n, k);
//     result.second = lastOcc(arr, n, k);

//     return result;
// }