
// Q8. Implement a Stack using two Queues Clone

// Stack and Queues are two popular data structures. Can we implement one of them given the other?

// In this question, given two queues you have to implement a stack using them. In other words, you are allowed to do insert and delete on these two queues only, but the effect outside must come as a LIFO list (stack).

// Input Format:

// First line of input contains an integer Q denoting the number of queries. A Query is of 2 Types:
// (a) 1 item (a query of this type means push 'item' onto the stack)
// (b) 2 (a query of this type means to pop element from stack and print the popped element)

// Each of next Q lines will contain a query.

// Output Format:

// The output for each test case will be space separated integers having -1 if the stack is empty else the element popped out from the stack.

// Sample Input
// 8
// 1 3
// 2
// 1 4
// 1 2
// 2
// 1 6
// 2
// 2

// Sample Output
// 3 2 6 4

// Explanation:
// First query is push 3, then pop will print 3, 3rd query is push 4, then push 2, 5th query is pop which prints 2, 6th query is push 6, then pop will print 6 and last query of pop will print 4.


// Solution Approach:
// ------------------

// queue<int> q1, q2;



// void pushStack(int x);

// int pop()


#include <queue>
using namespace std;

queue<int> q1, q2;

void push(int x) {
    // Step 1: push into empty q2
    q2.push(x);
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1,q2);
}

int pop() {
    if (q1.empty())
        return -1;

    int val = q1.front();
    q1.pop();
    return val;
}
