
// Q5. The Cafeteria Tray Dispenser


// You are in charge of the tray dispenser in a busy cafeteria. The dispenser operates on a strict "Last In, First Out" basis. Because the mechanism is old, you track the trays using a dynamic list where every tray is physically linked to the one below it.

// You receive a series of instructions from the kitchen manager:

// 1. Instruction Type 1 (Restock): The dishwasher brings a clean tray with a specific ID number and places it on top of the stack.

// 2. Instruction Type 2 (Serve): A customer arrives to eat. You must remove the tray currently at the very top of the stack and hand it to them (print the 
// tray ID).

// If a customer asks for a tray but the dispenser is completely empty, you must signal that no trays are available by reporting -1


// Input:

// First line of input contains number of test cases(no. of shifts).
// --First line of each test case contains an integer Q denoting the number of instructions.

// The instructions follows (e.g., 1 50 means add tray 50, 2 means hand out the top tray).


// Output:

// --The output for each test case will be space separated integers having -1 if the dispenser was empty else print the ID of every tray handed out.

// Sample Input

// 1
// 8
// 1 3 2 1 4 1 2 2 1 6 2 2

// Sample Output

// 3 2 6 4

// Explanation

// First instructions is push 3,
// then pop will print 3,
// 3rd instructions is push 4,
// then push 2,
// 5th instructions is pop which prints 2,
// 6th instructions is push 6,
// then pop will print 6 and
// last instructions of pop will print 4.



#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        int ele;
        cin>>ele;
        if(ele == 1){
            int p;
            cin>>p;
            st.push(p);
        }
        else if(ele == 2){
            if(!st.empty()){
                cout<<st.top()<<" ";
                st.pop();
            }
            else{
                cout<<"The stack is enpty";
            }
        }
    }
}