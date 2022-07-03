// // https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=0

// string replaceSpaces(string &str){
// 	string temp = ""; //a new empty string

//     for(int i = 0; i < str.length(); i++){
//         if(str[i] == ' '){
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else{
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }

// another solution

// string replaceSpaces(string &str){

//     for(int i = 0; i < str.length(); i++){
//         if(str[i] == ' '){
//             //substr() in c++ has TC of O(n)
//             //therefore, overall TC of the code will become O(N²)
//             //also SC is 0(N)
//             //str = str.substr(0, i) + "@40" + str.substr(i+1, str.length());

//             //better alternative for better TC and SC of O(1)
//             //replaces 1 character(i.e. space) from ith index with "@40"
//             str.replace(i, 1, "@40");
//         }
//     }
//     return str;
// }