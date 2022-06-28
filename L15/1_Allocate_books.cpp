// // https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=1

// // isPossibleSolu() does the partition and sees if the distribution of n books if possible among m students completely or not
// bool isPossibleSolu( vector<int> arr, int n, int m, int mid){
//     //to compare with m students
//     int studentCount = 1;
//     //to keep track of alloted pages among students
//     int pagesSum = 0;

//     for( int i=0; i<n; i++){
//         //try to allocate books
//         if( pagesSum + arr[i] <=mid ){
//             //if allocated less than mid then save the ans
//             pagesSum += arr[i];
//         }
//         //if pagesSum > mid then allocate the next book to next mth sudent by incrementing studentCount and save that book pages in pagesSum
//         else{
//             studentCount++;
//             // imp condition check
//             if(studentCount > m || arr[i] > mid){
//                 return false;
//             }
//             pagesSum = arr[i];
//         }
//     }
//     return true;
// }

// int allocateBooks(vector<int> arr, int n, int m) {
//     // Write your code here.
//     //setting search space start
//     int start=0;

//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum = sum + arr[i];
//     }
//     //setting search space end
//     int end = sum;
//     int mid = start + ((end-start)/2);

//     int ans = -1;
//     while(start<=end){
//         // isPossibleSolu() does the partition and sees if the distribution of n books if possible among m students completely or not
//         if(isPossibleSolu(arr, n, m, mid)){
//             //setting the answer with the mid returned by isPossibleSolu()
//             ans = mid ;
//             //ctrying ome back down the search space to find min of the max possible solutions
//             end = mid - 1;
//         }
//         //if no isPossibleSolu then bring up the start
//         else{
//             start = mid + 1;
//         }
//         mid = start + ((end-start)/2);
//     }
//     return mid;
// }