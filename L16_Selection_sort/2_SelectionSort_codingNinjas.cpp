// // https://www.codingninjas.com/codestudio/problems/selection-sort_981162?leftPanelTab=1

// void selectionSort(vector<int>& arr, int n)
// {
//     //serching over complete array
//     for( int i = 0; i < n-1; i++){
//         //minIndex points the minIndex of whole complete array
//         int minIndex = i; //setting minIndex for the search space to compare with

//         //searching over the other part of search space to compare i with.
//         for(int j = i+1; j < n; j++){
//             if(arr[j] < arr[minIndex]){
//                 minIndex = j; //updating the minIndex with that smaller number j
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }