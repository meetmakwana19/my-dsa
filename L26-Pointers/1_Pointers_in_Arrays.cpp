#include <iostream>
using namespace std;

int main()
{
     int arr[10] = {1, 10, 6, 4, 5}; // total size = 10 x 4bytes INT = 40bytes
     cout << "Address of first block of arr is : " << arr << endl;
     cout << "Address of first block of arr is : " << &arr[0] << endl;
     cout << "Address of second block of arr is : " << &arr[1] << endl; // 4  bytes difference for obvious reasons

     // * means de-referencing value found at that address pointed by *arr
     // * means value at
     cout << "*arr is " << *arr << endl;
     cout << "*arr+1 is " << *arr + 1 << endl;
     cout << "But value at arrr[0] hasn't got updated : " << arr[0] << endl;
     cout << "*(arr+1) is " << *(arr + 1) << endl;

     cout << endl
          << endl;

     cout << "arr is : " << endl;
     cout << *(arr + 0) << endl;
     cout << *(arr + 1) << endl;
     cout << *(arr + 2) << endl;
     cout << *(arr + 3) << endl;
     cout << *(arr + 4) << endl;
     cout << *(arr + 5) << endl;
     // Therefore formula is arr[i] = arr(arr + i)
     // this is how internal execution is happened

     cout << "i[arr] is " << 1 [arr] << endl;
     // i.e. i[arr] = *(i = arr)
     // and arr[i] = arr(arr + i) are one and the same
     int i = 3;
     cout << i[arr] << endl;
}