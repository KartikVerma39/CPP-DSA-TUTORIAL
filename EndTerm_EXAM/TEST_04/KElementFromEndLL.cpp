// Q1. The Parade Problem - Finding the Nth-to-Last Node

// Imagine you are trying to find a specific person in a parade (the linked list). The people are numbered from the beginning, but you want to find the person who is N steps away from the END of the parade.

// You cannot walk to the end and then count backward in a single trip.

// Complete the function findNLast(head, n): Return the nth node from end of the list. If n is greater than size of the list, return the last node of list (return NULL if list is empty).


// Input Format:

// The first line will contains an integer i.e. number of test cases

// Each test case contains three lines:

// --First line denotes the number of nodes in list.
// --Second line contains the node values.
// --Third line contains an integer, denoting n.


// Output Format:

// --For each test case, print the Nth element from end in separate line.


// Constraints:

// 1 <= no. of testcases <= 10
// 0 <= no. of nodes <= 10^5
// 0 <= node data <= 10^6
// 1 <= n <= 10^5

// Sample Input
// 2  // testcases
// 5            // no. of nodes (TC-1)
// 1 2 3 4 5    // nodes's data
// 2            // n
// 6            // no. of nodes (TC-2)
// 1 2 3 4 5 6  // nodes's data
// 8            // n

// Sample Output

// 4
// 6




// Node* fromLast(Node* head , int k){
//     if(head == NULL || k == 0){
//         return head;
//     }

//     Node* curr = head;
//     int size = 1;
//     while(curr->next!=nullptr){
//         size++;
//         curr = curr->next;
//     }

//     int steps = size - k;

//     Node* mover = head;
//     for(int i = 0 ; i  < steps ; i++){
//         mover = mover->next;
//     }
//     return mover;


// }