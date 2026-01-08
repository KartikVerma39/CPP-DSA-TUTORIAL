
// Q6. Count the Number of Nodes in Circular Linked List Clone

// In circular list the last node points to the first node creating a loop of nodes. Now, given a pointer to the head node of a circular linked list, count the total number of elements in it.

// Complete the function countNodes() which takes the head node of a circular linked list as a parameter and return the number of nodes in the list.

// Input Format:

// First line will contain the total number of test cases.
// Each test case consists of 2 lines, 
// First line has the number of nodes for generating circular linked list
// Second line contains the node values separated by spaces.

// Constraints:
// 1 <= Test Cases <= 100
// 0 <= no. of nodes <= 10^5
// 0 <= node data  <= 10^9

// Output Format:
// Print the total number of nodes in circular list using head of the linked list not by the no of nodes given in the 
// input 

// Sample Input
// 1  // Test Cases
// 3      // no. of nodes (TC-1)
// 1 2 3  // node's data

// Sample Output
// 3


// int countNode(Node* head){
//     if(head == nullptr){
//         return 0;
//     }
//     int count  = 1;
//     Node* curr = head->next;
//     while(curr!=head){
//         count++;
//         curr = curr->next;
//     }
//     cout<<count;
// }


