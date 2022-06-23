// Leetcode 1207
// https://leetcode.com/problems/unique-number-of-occurrences/

// Vector means dynamic array.
// vector<int> vec;
// vec is a vector of type int, which means it can store elements of integer type.

// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {

//         // creating new dynamic vector array to store counts
//         vector<int> countArr;

//         // finding size of the input passed array
//         int size = arr.size();

//         // sort the array before counting coounts
//         sort(arr.begin(), arr.end());

//         // starting a loop to go through whole array
//         int i = 0;
//         while( i < size ){
//             // starting count from 1 as atleast one time an element would be there
//             int count = 1;

//             //trying to loop for jth element fow which i will remain same
//             for( int j = i + 1; j < size; j++ ){

//                 //comparing a single i with all the elements of array by incrementing j++ to check the counts of all elements in full array
//                 if( arr[i] == arr[j]){

//                     //increment count if found a match
//                     count++;
//                 }
//                 else{
//                  break;
//                 }
//             }

//             //here a single element j is compared with all i elements and count is finalized for jth element for push in the countArr
//             countArr.push_back(count);
//             i = i + count;
//         }

//         // overwrite the size of given arr with the size of countArr as we need that variable ahead for countArr looping
//         size = countArr.size();

//         // sort the array before comparing consecutive counts in it
//         sort(countArr.begin(), countArr.end());

//         //search till size-1 coz i is compared with i+1 in next step
//         for( int i = 0; i < size-1; i++){
//             if(countArr[i] == countArr[i+1]){
//                 return 0;
//             }
//         }
//         return 1;
//     }
// };

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool uniqueOccurrences(vector<int> &arr, int size)
{
    vector<int> countArr;

    // sort(arr.begin(), arr.end());
    std::sort(std::begin(arr), std::end(arr));

    int i = 0;
    while (i < size)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        countArr.push_back(count);
        i = i + count;
    }

    printArray(countArr, size);
    // TODO
    sort(countArr.begin(), countArr.end());
    printArray(countArr, size);

    for (int i = 0; i < size - 1; i++)
    {
        if (countArr[i] == countArr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int size;
    // initializing a dynamic array
    vector<int> num;

    cout << "Enter size for array = ";
    cin >> size;

    // taking array input
    for (int i = 0; i < size; i++)
    {
        cout << "Insert element for the array = ";
        int n;
        cin >> n;
        num.push_back(n); // this is the way to insert elements in vector dynamic array
    }

    cout << uniqueOccurrences(num, size);
    cout << endl;
    if (uniqueOccurrences(num, size))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}