// Sum of Numbers


// Parameterised

// #include<iostream>
// using namespace std;
// void print(int n , int i){
//     if(n<1){
//         cout<<i;
//         return;
//     }
//     else{
//         print(n-1 , i+n);
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     print(n,0);
// }



// Functional



// #include<iostream>
// using namespace std;
// int print(int n){
//     if(n == 0){
//         return 0;
//     }
//     else{
//         return n + print(n-1);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<print(n);
// }




// Factorial


// Parameterised



// #include<iostream>
// using namespace std;
// void factorial(int n , int i){
//     if(n<1){
//         cout<<i;
//         return;
//     }
//     else{
//         factorial(n-1 , i*n);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     factorial(n , 1);
// }




// Functional


// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n == 1){
//         return 1;
//     }
//     else{
//         return n * factorial(n-1);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n);
// }