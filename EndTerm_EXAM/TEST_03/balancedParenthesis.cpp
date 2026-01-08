
// Q3. Code Compiler Output:


// You are developing a code compiler, and in that there must be a feature to check whether the parentheses in the code expression are
// balanced or not, i.e.

// 	1. Open brackets must be closed by the same type of brackets.
// 	2. Open brackets must be closed in the correct order.

// The following are some examples of code expressions containing the balanced parentheses:

// "if(arr(4) > 9) { foo(arr[2]); }"
// "for(i=0; i<a[0]; i++) { a[i]++; }"

// In the following examples, parentheses are not balanced:

// "while(true) ) { foo( }; )"
// "if(x) {"

// Given a code expression, check whether it is containing the balanced parentheses or not, and accordingly print the compiler output as
// "Success" or "Error".

// Input Format:

// --First line of input contains an integer T, denoting the number of test cases.
// --Each test case contains a string, denoting the code to be compiled.

// Output Format:

// --For each test case, print the output from compiler, after compiling the given code. 

// Sample Input

// 2  // Test Cases
// if(arr(4) > 9) { foo(arr[2]); }
// if ( arr[ 7 ) ]

// Sample Output

// Success
// Error 
// Explanation

// Test Case 1:
// --The given code expression contains balanced parentheses.
// --Therefore, the compilation output will be "Success".

// Test Case 2:
// --In the given code expression, the open brackets are not closed in the correct order.
// --Therefore, the compilation output will be "Error".


// Solution Approach:
// ------------------

// --checking balanced parentheses

// --Given a code expression string, check if all these brackets are balanced:

// ()

// {}

// []

// Rules:

// Each opening bracket must match the same type.

// They must close in the correct order (stack needed).

// Output:

// "Success" if balanced

// "Error" if not balanced



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>st;
    string s = "if(arr(4) > 9) { foo(arr[2]); }";
    bool balanced = true;

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if(st.empty()){
                balanced = false;
                break;
            }
            else if((s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '[') || (s[i] == '}' && st.top() != '{')){
                balanced = false;
                break;
            }
        }
    }
    if (!st.empty())
        balanced = false;
    if(balanced){
        return 0;
    }
    else{
        return 1;
    }
}