// // https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTab=1

// vector<int> reverse(vector<int> v){
//     int s = 0;
//     int e = v.size() - 1;

//     while( s < e ){
//         swap(v[s++], v[e--]);
//     }
//     return v;
// }

// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	// starting from last
//     int i = n-1;
//     int j = m-1;
//     int carry = 0;
//     vector<int> ans;

//     //go till the start index i=0
//     while(i>=0 && j>=0){
//         int val1 = a[i];
//         int val2 = b[j];

//         int sum = val1 + val2 + carry; //eg : 9+9=18

//         carry = sum/10; //eg : 18/10 = 1
//         sum = sum % 10; //eg : 18 % 10 = 8

//         ans.push_back(sum);

//         i--;
//         j--;
//     }

//     //case 1 : when length of arr1 is bigger
//     while(i >= 0){
//         int sum = a[i] + carry;

//         carry = sum/10; //eg : 18/10 = 1
//         sum = sum % 10; //eg : 18 % 10 = 8

//         ans.push_back(sum);

//         i--;
//     }

//     //case 2 : when arr2 is bigger
//     while(j >= 0){
//         int sum = b[j] + carry;

//         carry = sum/10; //eg : 18/10 = 1
//         sum = sum % 10; //eg : 18 % 10 = 8

//         ans.push_back(sum);

//         j--;
//     }

//     //case 3 : when are are same size probably but with carry probably
//     while(carry != 0){
//         int sum = carry;

//         carry = sum/10; //eg : 18/10 = 1
//         sum = sum % 10; //eg : 18 % 10 = 8

//         ans.push_back(sum);
//     }

//     return reverse(ans);
// //     return(ans);
// }