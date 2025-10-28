// 1. Square Pattern


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<n ; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }



// 2. Triangle Pattern


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<=i ; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// } 





// 3. Triangle Pattern


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 1 ; j<=i ; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }




// 4. Triangle Pattern But Digits Same


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 1 ; j<=i ; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n; 
//     cin>>n;
//     print(n);
// }




// 5. Reverse Triangle



// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<n-i ; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }




// 6. Rverse Number Pattern Triangle


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 1 ; j<=n-i+1 ; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);    
// }



// 7. Equilateral Triangle Pattern



// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<n-i ; j++){
//             cout<<" ";
//         }
//         for(int k = 0 ; k<=i  ; k++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }





// 8. Pyramid Triangle Pattern



// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<n-i-1 ; j++){
//             cout<<" ";
//         }
//         for(int k = 0 ; k<(2*i)+1  ; k++){
//             cout<<"*";
//         }
        
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }





// 9. Reverse Pyramid Triangle Pattern


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 1 ; j <= i ; j++){
//             cout<<" ";
//         }
//         for(int k = (2*i)+1 ; k < 2*n ; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }





// 10. Rhombous Pattern




// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<n-i-1 ; j++){
//             cout<<" ";
//         }
//         for(int j = 0 ; j<2*i+1 ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 1 ; j<=i ; j++){
//             cout<<" ";
//         }
//         for(int j = (2*i)+1 ; j<2*n ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }




//11. Right Side Triangle



// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 0 ; j<i ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i = 1 ; i<n ; i++){
//         for(int j = i ; j<n  ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }





// 12. Binary Triangle


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<n ; i++){
//         for(int j =  0 ; j<=i ; j++){
//             if((i%2 == 0 && j%2 == 0) || (i%2 != 0 && j%2 != 0)){
//                 cout<<"1 ";
//             }
//             else{
//                 cout<<"0 ";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }






//13. Number Space Number Triangle


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1; i<=n ; i++){
//         for(int j = 1 ; j<=i ; j++){
//             cout<<j;
//         }
//         for(int j = 0 ; j<n-i ; j++){
//             cout<<" ";
//         }
//         for(int j = 0 ; j<n-i ; j++){
//             cout<<" ";
//         }
//         for(int j = i ; j>=1 ; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }




//14. Right Angle Triangle with numbers


// #include<iostream>
// using namespace std;
// void print(int n){
//     int k = 1;
//     for(int i =  1 ; i<=n ; i++){
//         for(int j = 1 ; j<=i ; j++){
//             cout<<k<<" ";
//             k++;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }




// 15. Alphabets Right Triangle



// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 0 ; j<i ; j++){
//             cout<<char(65+j);
//         }
//         cout<<endl;
//     }
// }
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }





// 15. Alphabets Right Triangle Opposite


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 0 ; j<=n-i ; j++){
//             cout<<char(65+j)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }




//15. Right Angle Same Alphabets Per Line


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<=i ; j++){
//             cout<<char(65+i)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }




//16. Alphabets Pyramid


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<n ;i++){
//     for(int j = 0 ; j<n-i-1 ; j++){
//         cout<<" ";
//         }
//     char ch = 'A';
//     int breakpoint = (2*i+1)/2;
//     for(int j = 0  ; j<2*i+1 ; j++){
//         cout<<ch;
//         if(j <= breakpoint){
//             ch++;
//         }
//         else{
//             ch--;
//         }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }



//17. D E Alphabets Pyramid


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 0 ; j<i ; j++){
//             cout<<char(64+n-i+1+j)<<" ";
//         }
        
//         cout<<endl; 
//    }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }


//18. Spaced Rohmbous 



// #include<iostream>
// using namespace std;

// void print(int n) {
//     int inis = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n - i; j++) {
//             cout << "*";
//         }
//         for (int j = 0; j < inis; j++) {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++) {
//             cout << "*";
//         }
//         inis += 2;
//         cout << endl;
//     }

//     int in = 2 * n - 2; // Also optimized to avoid redundant spaces
//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j < i; j++) {
//             cout << "*";
//         }
//         for (int j = 0; j < in; j++) {
//             cout << " ";
//         }
//         for (int j = 0; j < i; j++) {
//             cout << "*";
//         }
//         in -= 2;
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     print(n);
// }





// 19. Sand Time Pattern 


// #include<iostream>
// using namespace std;
// void print(int n){
//     int inis = 2*n - 2;
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 0 ; j<i ; j++){
//             cout<<"*";
//         }
//         for(int j = 0 ; j<= inis ; j++){
//             cout<<" ";
//         }
//         for(int j = 0 ; j<i ; j++){
//             cout<<"*";
//         }
//         inis -= 2;
//         cout<<endl;
//     }
//     int in = 2;
//     for(int i = 1 ; i <= n-1 ; i++){
//         for(int j = 0 ; j<n-i ; j++){
//             cout<<"*";
//         }
//         for(int j = 0 ; j<= in ; j++){
//             cout<<" ";
//         }
//         for(int j = 0 ; j<n-i ; j++){
//             cout<<"*";
//         }
//         in += 2;
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }




// 20. Hollow Square


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<n ; j++){
//             if((i == 0 || j == 0 || i == n-1 || j == n-1)){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }



// 21. Number Difficult Square


// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0 ; i<2*n - 1 ; i++){
//         for(int j = 0 ; j<2*n - 1 ; j++){
//             int top = i;
//             int left = j;
//             int right = (2*n -2) - j;
//             int down = (2*n - 2) - i;
//             cout<<(n - min(min(top,down) , min(left , right)));
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }