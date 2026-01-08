// Q9. Baseball Game Scoring

// You are keeping track of scores in a baseball game with some special rules. You will be given a single string without spaces, which
// contains:

//     1. Numbers (0-9) →These are the scores you add.
//     2. C(Cancel) → Cancel the last score (remove the last number from the record).
//     3. D(Double) → Add an extra score that is double the last score.
//     4. +(Sum)→ Add an extra score that is sum of the last two score.

// At the end, you sum up all the scores that is entered from the startingly and print the total.

// Input Format

// A single string without spaces containing numbers and operations.

// Output Format

// A single integer representing the total score after applying all operations.

// Sample Input 1

// 52C2D+

// Sample Output 1

// 17



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "52C2D+";
    vector<int>ans;

    for(int i = 0 ; i < s.size() ; i++){
        if(isdigit(s[i])){
            ans.push_back(s[i]-'0');
        }
        else if(s[i] == 'C'){
            ans.pop_back();
        }
        else if(s[i] == 'D'){
            ans.push_back(2*ans.back());
        }
        else if(s[i] == '+'){
            int n = ans.size();
            ans.push_back(ans[n-1] + ans[n-2]);
        }
    }

    int total = 0 ;
    for(int i = 0 ; i < ans.size() ; i++){
        total += ans[i];
    }
    cout<<total;
}