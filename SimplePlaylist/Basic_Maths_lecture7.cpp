// Count Digits

// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     cin>>number;
//     int num = 0;
//     while(number!=0){
//         num++;
//         number /= 10;
//     }
//     cout<<"The digits in the number are : "<<num;
// }




// Reverse of Digits


// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     cin>>number;
//     int reverse = 0;
//     while(number>0){
//         int temp = number % 10;
//         reverse = reverse*10;
//         number = number/10;
//         reverse = reverse + temp;
//     }

//     cout<<"The reverse of the number is : "<<reverse;
// }




// Pallindrome Check



// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     int second = num;
//     int reverse = 0;
//     while(second>0){
//         int temp = second % 10;
//         second = second / 10;
//         reverse = (reverse * 10) + temp;
//     }

//     if(num == reverse){
//         cout<<"It is a palindrome";
//     } 
//     else{
//         cout<<"It is not a palindrome";
//     }
// }




// Armstrong Number


// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     cin>>number;
//     int second = number;
//     int total_digits = 0;
//     while(second>0){
//         second = second / 10;
//         total_digits++;
//     }
    
//     int dup = number;
//     int armstrong  = 0;
//     while(dup>0){
//         int temp = dup % 10;
//         int powerful = 1;
//         for(int i = 0 ; i<total_digits ; i++){
//             powerful *= temp;
//         }
//         armstrong += powerful;
//         powerful=1;
//         dup = dup/10;
//     }

//     if(number == armstrong){
//         cout<<"It is an armstrong number";
//     }
//     else{
//         cout<<"It is not an armstrong number";
//     }
// }






// Print all Divisors


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     vector<int>ls;
//     for(int i = 1 ; i*i<=num ; i++){
//         if(num%i == 0){
//             ls.push_back(i);
//             if(num/i != i){
//                 ls.push_back(num/i);
//             }
//         }
//         sort(ls.begin() , ls.end());
//     }
//     for(auto it : ls) {
//         cout<<it<<" ";
//     }
    
// }






//  Prime Number



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     int divisor = 0;
//     for(int i = 1 ; i<=sqrt(num) ; i++){
//         if(num%i == 0){
//             divisor++;
//             if(num/i != i){
//                 divisor++;
//             }
//         }
//     }

//     if(divisor == 2){
//         cout<<"It is a prime number";
//     }
//     else{
//         cout<<"It is not a prime number";
//     }
// }




// #include<iostream>
// using namespace std;

// int main() {
//     int num;
//     cin >> num;

//     if (num < 2) {
//         cout << "It is not a prime number";
//         return 0;
//     }

//     bool isPrime = true;
//     for (int i = 2; i <= num / 2; i++) {
//         if (num % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime) {
//         cout << "It is a prime number";
//     } else {
//         cout << "It is not a prime number";
//     }
// }





// GCD OR HCF



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;    
//     for(int i = min(num1,num2) ; i>=0 ; i--){
//         if(num1%i == 0 && num2%i == 0){
//             cout<<i;
//             break;
//         }
//     }

// }



// Euclidean Algorithm


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;    
//     while(a>0 && b>0){
//         if(a>b){
//             a = a % b;
//         }
//         else{
//             b = b % a;
//         }
//     }
//         if(a==0){
//             cout<<b;
//         }
//         else{
//             cout<<a;
//         }

// }