
// Q2. The Airport Mishap:


// You are working as a software engineer for an airline's baggage tracking system. Before a flight takes off, every piece of luggage is scanned and its unique ID(nonnegative integers) is recorded in a database. During the flight, the luggage shifts around in the cargo hold, changing the order.

// Upon landing, the ground crew scans the bags as they are unloaded onto the conveyor belt. However, the crew realizes that the number of bags unloaded is one less than the number of bags loaded. One bag has been lost in transit! Given the list of bag IDs at departure and the scrambled list of bag IDs at arrival, your task is to identify the ID of the missing bag.

// Input Format:

// First line contains 𝑇(number of flights to analyze).

// --For each flight: The first line contains 𝑚(total bags checked in) and 𝑛(total bags arrived).

// The second line contains the IDs(non-negative integers) of the bags checked in.

// The third line contains the IDs(non-negative integers) of the bags that arrived.

// Output Format:

// --For each flight, print the ID of the missing bag.

// Sample Input :

// 1
// 5 4
// 1 2 3 4 5
// 3 4 1 2

// Sample Output

// 5



#include<iostream>
#include<iostream>
using namespace std;
int main(){
 
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr[m];
    int sum = 0;
    for(int i = 0 ; i<m ; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    int arr2[n];
    int sum2 = 0;
    
    for(int i = 0 ; i < n ; i++){
        cin>>arr2[i];
        sum2 += arr2[i];
    }


    cout<<sum - sum2;
    
}



