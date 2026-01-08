

// Q7.  Implement Queue using two stacks

// Stack and Queues are two popular data structures. Can we implement one of them given the other?

// In this question, given two stacks you have to implement a queue using them. In other words, you are allowed to do push and pop on these two stacks only, but the effect outside must come as a FIFO list (queue).

// Sample Input

// First line of input contains an integer Q denoting the number of queries.

// A Query is of 2 Types

// (a) 1 item  (a query of this type means insert 'item' into the queue)
// (b) 2    (a query of this type means to delete element from queue and print the deleted element)

// The second line of each test case contains Q queries separated by space.

// Sample Output

// The output for each test case will be space separated integers having -1 if the queue is empty else the element deleted from the queue.

// You are required to complete the methods given.

// Sample Input
// 8
// 1 3 2 1 4 1 2 2 1 6 2 2

// Sample Output
// 3 4 2 6

// Explanation
// First query is insert 3, then delete will print 3, 3rd query is insert 4, then insert 2, 5th query is delete which prints 4, 6th query is insert 6, then delete will print 2 and last query of delete will.




#include <iostream>
#include <stack>
using namespace std;

class QueueUsingStacks {
    stack<int> s1, s2;

public:
    void enqueue(int x) {
        s1.push(x);
    }

    int dequeue() {
        if(s1.empty() && s2.empty()){
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int val = s2.top();
        s2.pop();
        return val;
    }
};

int main() {
    int Q;
    cin >> Q;

    QueueUsingStacks q;

    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            q.enqueue(x);
        } else {
            cout << q.dequeue() << " ";
        }
    }

    return 0;
}
