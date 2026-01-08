// Q1. The VIP Reversal at the Ice Cream Truck:


// Imagine a very popular ice cream truck, "The Sweet Stop." Customers line up in a Queue—the first person in line gets the next ice cream.

// Concept: Changing the order of the line so the person who arrived last gets served first.

// Input (Original Queue): Four friends are in the line:

// Friend 1 (First)→Friend 2→Friend 3→Friend 4 (Last)
// (Like the sample: 1, 2, 3, 4)

// The Reversal: A special announcement declares that for the next batch of customers, the line must be completely reversed to test a "new customer service flow."

// Output (Reversed Queue): The new order of the line, where the original last person is now first:

// Friend 4 (First)→Friend 3→Friend 2→Friend 1 (Last)
// (Like the sample: 4, 3, 2, 1)

// Your task is to take the original waiting line (the queue) and apply this reversal to get the new order.

// The function reverseQueue(queue) takes the queue as input and reverse it.

// Input Format:

// --The first line of input will contains an integer T denoting the no of test cases. 
// --Then T test cases follow. 
// --Each test case contains a number N followed by N number of elements in order in which they will be inserted in queue.

// Output Format:

// For each test case, you have to reverse the queue in the array given. You are required to complete the methods given only.

// Constraints
// 1 <= T <= 10
// 1 <= N <= 100

// Sample Input

// 2
// 4
// 1 2 3 4
// 5
// 10 20 30 50 40


// Sample Output

// 4 3 2 1
// 40 50 30 20 10


// void reversQueue(queue<int>q){
//     stack<int>st;
//     while(!queue.empty()){
//         st.push(queue.top());
//         q.pop();
//     }
//     while(!st.empty()){
//         q.push(st.top());
//         q.pop();
//     }
// }