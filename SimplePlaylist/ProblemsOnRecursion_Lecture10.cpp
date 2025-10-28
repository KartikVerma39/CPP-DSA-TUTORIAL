// 1. Print Name 5 Times


// #include<iostream>
// using namespace std;
// int count = 0;
// void print(){
//     string name = "kartik";
//     if(count == 5){
//         return;
//     }
//     else{
//         cout<<name<<endl;
//         count++;
//         print();
//     }
// }
// int main(){
//     print();
// }



// #include<iostream>
// using namespace std;
// string name = "Kartik";
// void print(int i , int n){
//     if(i>n){
//         return;
//     }
//     else{
//         cout<<name<<endl;
//         print(i+1 , n);
//     }
// }
// int main(){
//     int i = 1;
//     int n;
//     cin>>n;
//     print(i,n);
// }

 


// 2. Print Linearly from 1 to N.



// #include<iostream>
// using namespace std;
// void print(int i , int n){
//     if(i > n){
//         return;
//     }
//     else{
//         cout<<i<<" ";
//         print(i+1 , n);
//     }
// }
// int main(){
//     int i = 1;
//     int n;
//     cin>>n;
//     print(i , n);
// }





// 3. Print Linearly from N to 1.



// #include<iostream>
// using namespace std;
// void print(int i , int n){
//     if(n<i){
//         return;
//     }
//     else{
//         cout<<i<<" ";
//         print(i-1 , n);
//     }
// }
// int main(){
//     int i = 1;
//     int n;
//     cin>>n;
//     print(n , n);
// }






// 4. Print Linearly from 1 to N (Bcktracking)


 
// #include<iostream>
// using namespace std;
// void print(int i , int n){
//     if(i<1){
//         return;
//     }
//     print(i-1 , n);
//     cout<<i<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n , n);
// }




// 5. Print Linearly from N to 1 (Bcktracking)



// #include<iostream>
// using namespace std;
// void print(int i , int n){
//     if(i>n){
//         return;
//     }
//     print(i + 1  , n );
//     cout<<i<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1 , n);
// }
