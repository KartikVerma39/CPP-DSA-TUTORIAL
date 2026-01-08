
// Q7. Duplicate Flyer Detection


// In a busy international airport, passenger IDs are logged every time a traveler passes through a security checkpoint. However, due to repeat scans or additional checks, the same flyer may be logged more than once.

// Your have to help the airport system identify all duplicate flyer IDs — those that appear more than once in the scanned log.


// Constraints:

// --Number of scanned entries ≤ 10⁵
// --Each ID is an alphanumeric string (e.g., "A123", "XY9KL"), up to 20 characters

// Input:

// --A list of strings representing passenger IDs scanned at the security checkpoint. Each ID is unique per person, but may appear multiple times in the log.

// Output:

// --Return a list of duplicate IDs — the IDs that appeared more than once in the input. Each duplicate should appear only once in the output. The order does

// Sample Input:

// 5
// A123 B456 C789 A123 D000

// Sample Output:

// A123



#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    string arr[size];
    unordered_map<string,int>mp;
    for(int i = 0 ; i < size;  i++){
        cin>>arr[i];
    }

    for(auto it:arr){
        mp[it]++;
    }

    for(auto it:mp){
        if(it.second>1){
            cout<<it.first;
        }
    }

}