// // https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?leftPanelTab=0

// void bubbleSort(vector<int>& arr, int n)
// {
//     //for round 1 to round n-1
//     //eg if n=6, then it'll from round 1 to round 5
//     //this outer loop represents round
//     for(int i = 1; i < n; i++){
//         bool isSwapped = false ; //to check for a sorted array(best case)

//         //imp :- j will go till n-i as other side of elements got sorted in the previous roundd
//         //this inner loop represemts comparing ith element with all the elements of array
//         for(int j = 0; j < n-i; j++){
//             //if i is taken fromm i=0 to i < n-1
//             //then j will be j=0 to j < j-i-1

//             if(arr[j] > arr[j+1]){
//             //when a > b, do swap
//                 swap(arr[j], arr[j+1]);
//                 isSwapped = true;
//             }
//         }
//         if(isSwapped == false){
//             //already sorted
//             break;
//         }
//     }
// }
