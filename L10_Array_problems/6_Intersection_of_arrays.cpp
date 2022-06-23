// // https: // www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     vector<int> result;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             //if element in arr2 is big means next elements will be bigger too so no need to check so break;
//             if (arr1[i] < arr2[j]){
//                 //no need to check in this case as intersection wont be found
//                 break;
//             }
//             if (arr1[i] == arr2[j])
//             {
//                 result.push_back(arr1[i]);

//                 //overwrite that element with garbage value so that it doesnt gets compared further on to create intersection conflict as it already got paired
//                 arr2[j] = -1;
//                 break;
//             }
//         }
//     }
//     return result;
// }

// ------------------------------------------------------------------------------------------------
// BETTER SOLUTION

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     vector<int>result;
//     int i=0, j=0;

//     while( i<n && j<m ){

//         if( arr1[i] == arr2[j] ){
//             result.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         if( arr1[i] < arr2[j] ){
//             i++;
//         }
//         if( arr1[i] > arr2[j] ){
//             j++;
//         }
//     }
//     return result;
// }