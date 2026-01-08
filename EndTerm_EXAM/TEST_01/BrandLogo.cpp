

// Q8. Brand Logo of a company


// A couple decided to open a footwear company, and for its brand logo they wanted to use a single letter. So, they thought of a very interesting method, i.e. any letter from the wife's name that is present at the minimum index in the husband's name will be selected as their company's logo, and if no letter of wife's name is present in husband's name then they will choose letter 'h'.

// Now, given the name of both husband and wife, you have to find the logo for their company as per the above method. For example, given husband's name =
// "nimish" and wife's name = "seema", then two characters (s and m) appears in husband's name, but we will choose 'm' as their company's logo because it appears at minimum index.

// Input Format:

// The First line of input contains an integer T, denoting the no of test cases.
// --The first line of each test case contains a string, denoting husband name.

// The second line of each test case contains a string, denoting wife name.

// Output Format:

// --For each test case, print the selected brand logo for their company.

// Constraints
// 1 <= T <= 10
// 1 <= length_of(name) <= 10^5
// All the names consist of lowercase English letters only.


// Sample Input:

// 2 // Test Cases

// nimish
// seema
// naveen
// priti

// Sample Output:

// m
// h



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    for(int i = 0 ; i < testcase ; i++){
        string wife;
        string husband;
        cin>>husband;
        cin>>wife;
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        for(auto it:husband){
            mp[it]++;
        }
        for(auto it:wife){
            mp1[it]++;
        }

        for(int i = 0 ; i < husband.size() ; i++){
            if(mp1[husband[i]]){
                cout<<husband[i]<<endl;
                break;
            }
        }
    }
    cout<<'h';
}
