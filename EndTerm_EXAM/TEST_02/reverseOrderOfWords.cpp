
// // Q2.  Reverse the order of words of a string Clone

// // Given a string of words, reverse the order of words in the string individually, not the whole string.

// // Complete the function revWordsOrder(str) that accepts a string as parameter and reverses the order of words of string.

// // Input

// // The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. Each test case contains the string str. 

// // Output

// // For each test case, print the resultant string in new lines.

// // Sample Input
// // 2

// // Code Quotient Loves Code
// // Hello Coders

// // Sample Output
// // Code Loves Quotient Code
// // Coders Hello



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int test;
//     cin>>test;
//     for(int i = 0 ; i < test ; i++){
//         string s;
//         getline(cin , s);
//         reverse(s.begin(),s.end());
//         int start = 0;
//         int end = s.size() - 1;
//         for(int i = 0 ; i <= s.size() ; i++){
//             if(i == s.size() || s[i] == ' '){
//                 end = i - 1;
//                 while(start<end){
//                     swap(s[start],s[end]);
//                     start++;
//                     end--;
//                 }
//                 start = i + 1;
//             }
//         }
//         cout<<s<<endl;
//     }
    
// }