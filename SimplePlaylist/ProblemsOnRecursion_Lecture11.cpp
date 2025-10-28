// Array Reverse

// #include<iostream>
// using namespace std;
// void reverse(int arr[] , int l , int r){
//     if(l>=r){
//         return;
//     }
//     else{
//         swap(arr[l] , arr[r]);
//         reverse(arr , l+1 , r-1);
//     }
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     reverse(arr , 0 , 4);

//     for(int i = 0 ; i<5 ; i++){
//         cout<<arr[i]<<" ";
//     }
// }





// Pallindrome Check


// #include<iostream>
// using namespace std;
// bool palindrome(int i , string s){
//     if(i>=s.size()/2){
//         return true;
//     }
//     if(s[i] != s[s.size() - 1 - i]){
//         return false;
//     }
//     return palindrome(i + 1 , s);
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<palindrome(0 , s);
// }