
// Q8. Compatibility Test:


// Rohan and Aditi are about to get married, but before that they wanted to check their compatibility, so they decided to visit an astrologer. The astrologer asked them to think of a string in their mind, now according to him if Rohan's string occurs at the end of Aditi's string, then they are compatible otherwise not.

// For example: If Aditi's string = "Face" and Rohan's string = "ace", then they are compatible because the second string occurs at the end of first string.

// Complete the function areCompatible(aditi_str, rohan_str) which accepts two strings as parameter and returns 1 if rohan_str occurs at end of aditi_str and 0 otherwise.

// Input Format:

// --The first line of input contains an integer T denoting the no of test cases . 
// --Then T test cases follow. Each test case contains two strings aditi_str, rohan_str. 

// Output Format:

// --For each test case, print 0 or 1 in new lines.

// Constraints:

// 1 <= T <= 10
// Given two strings can contain any valid ASCII character.

// Sample Input

// 2
// CodeQuotient ent
// Coding Code

// Sample Output

// 1
// 0



// Solution Approach:
// ------------------

// Given two strings:



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "CodeQuotient";
    string s2 = "ent";
    if(s2.size() > s1.size()){
        return false;
    }

    for(int i = 0 ; i < s1.size() ; i++){
        if(s1[s1.size() - s2.size() + i] != s2[i]){
            return false;
        }
    }
    return true;
}