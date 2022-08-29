// // lhttps://www.codingninjas.com/codestudio/problems/find-power-of-a-number_893198?leftPanelTab=0

// long long power(int a, int b){

//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }

//     long long ans = power(a, b/2);

//     if(b%2 == 0){// even power
//         return ans*ans;
//     }
//     else{ //odd power
//         return a*ans*ans;
//     }
// }

// long long Pow(int X, int N)
// {
//     long long ans = power(X, N);
//     return ans;
// }