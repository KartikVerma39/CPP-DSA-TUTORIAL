// Find the minimum bracket reversals for balanced expression Clone

// Given an expression having only square brackets ‘[‘ and ‘]’. Find the minimum number of brackets reversals required to make the expression balanced. If expression cannot be made balanced, print -1 and if it is already balanced, print 0.

// Input

// The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case contains an expression consisting of square brackets only.

// Output
// The output for each test case will be the minimum number of bracket reversals required to make the expression balanced if possible.

// Sample Input 1
// 2
// []
// ][

// Sample Output 1
// 0
// 2

// Explanation 1
// First expression is already balanced, so print 0.
// Second expression requires 2 reversals (both the brackets needs to be changed as []) so prints 2.

// Sample Input 2
// 1
// [[[[

// Sample Output 2
// 2


// Solution Approach:
// ------------------


// You are given a string containing only '[' and ']'.
// You need to find the minimum number of bracket reversals required to make the expression balanced.

// If the expression is already balanced → output 0

// If it cannot be balanced → output -1

// Example1:

// []

// Already balanced

// Output: 0

// Example2:

// ][

// Reversal:

// ][ → []   (2 reversals)

// Output: 2

// Example3:

// [[[[

// Reversal:

// [[[[ → [[]]   (2 reversals)


// Output: 2



#include <bits/stdc++.h>
using namespace std;

int minReversals(string s) {


    int n = s.length();
    if(n%2 != 0){
        return - 1;
    }

    stack<char>st;

    for(char ch : s){
        if(ch == '['){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top() == '['){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }

    int open = 0;
    int close = 0;
    while(!st.empty()){
        if(st.top() == '['){
            open++;
        }
        else{
            close++;
        }
        st.pop();
    }

    return ((open + 1)/2) + ((close + 1)/2);

    int reversals = 0;

    while (!st.empty()) {
        char b1 = st.top(); st.pop();
        char b2 = st.top(); st.pop();

        // Any pair needs exactly 1 reversal
        reversals++;
    }

    return reversals;
    // int n = s.length();

    // // Odd length cannot be balanced
    // if (n % 2 != 0)
    //     return -1;

    // stack<char> st;

    // // Remove balanced parts
    // for (char ch : s) {
    //     if (ch == '[') {
    //         st.push(ch);
    //     } else {
    //         if (!st.empty() && st.top() == '[') {
    //             st.pop();
    //         } else {
    //             st.push(ch);
    //         }
    //     }
    // }

    // int open = 0, close = 0;

   
    // while (!st.empty()) {
    //     if (st.top() == '[')
    //         open++;
    //     else
    //         close++;
    //     st.pop();
    // }

    // return (open + 1) / 2 + (close + 1) / 2;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;
        cout << minReversals(s) << endl;
    }

    return 0;
}
