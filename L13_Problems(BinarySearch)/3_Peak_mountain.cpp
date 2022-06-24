// // // leetcode 852

// // class Solution
// // {
// // public:
// //     int peakIndexInMountainArray(vector<int> &arr)
// //     {
// //         int start = 0;
// //         int end = arr.size() - 1;

// //         int mid = start + ((end - start) / 2);

// //         // no need to check when start=end at the end as it will be already checked in previous iteration.
// //         while (start < end)
// //         {

// //             // checking following given conditon of left side of mountain
// //             // arr[0] < arr[1] < ... arr[i-1] < arr[i]

// //             if (arr[mid] < arr[mid + 1])
// //             {
// //                 start = mid + 1; // bring start up as need to reach the peak from left climb
// //             }

// //             // meaning is : (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
// //             // i.e. the given constraint for peak : arr[i-1] < arr[i] > arr[i+1]
// //             else
// //             {
// //                 // here the mid can be either on right decline or can be itself peak so equate end to mid only and not mid-1
// //                 end = mid;
// //             }
// //             mid = start + ((end - start) / 2);
// //         }
// //         return start;
// //     }
// // };

// // faster and more understandable and efficient approach

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int start = 0;
//         int end = arr.size() - 1;

//         int mid = start + ((end-start)/2);

//         //no need to check when start=end at the end as it will be already checked in previous iteration.
//         while(start<end){

//             if( arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
//                 return mid;
//             }

//             //checking following given conditon of left side of mountain
//             //arr[0] < arr[1] < ... arr[i-1] < arr[i]

//             else if(arr[mid] < arr[mid+1]){
//                 start = mid + 1; //bring start up as need to reach the peak from left climb
//             }

//             else{
//                 //here the mid can be either on right decline or can be itself peak so equate end to mid only and not mid-1
//                 end = mid ;
//             }
//             mid = start + ((end-start)/2);
//         }
//         return -1;
//     }
// };