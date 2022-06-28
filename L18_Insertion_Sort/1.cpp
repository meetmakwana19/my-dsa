// // https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179?leftPanelTab=0

// void insertionSort(int n, vector<int> &arr){

//     //starting from 1 since assuming 0th index to be sorted (for comparison with next elements)
//     for(int i = 1; i < n; i++){
//         int temp = arr[i];
//         //to compare with the behind's previous element with current i
//         int j = i - 1;
//         for(; j >=0 ; j--){
//             if(arr[j] > temp){
//                 //shifting
//                 arr[j+1] = arr[j];
//             }
//             //no need to do anything when temp > arr[j]
//             else{
//                 break;
//             }
//         }
//         //putting back the temp in it's OG place of i ie.j+1
//         arr[j+1] = temp;
//     }
// }