



// // Q4. Remove Duplicates from sorted doubly linked list Clone

// // A sorted doubly linked list is given to you. Your task is to remove the duplicate nodes from this list.

// // The function removeDupsDLL() takes the head node of a doubly linked list as a parameter, and returns the head of updated list after deleting the duplicate elements from it.

// // Input Format:

// // First line will contain the number of test cases i.e. T.
// // Each test case consists of two lines. In first line total number of nodes is given and in second line the sorted node values are provided.

// // Output Format:

// // Print the integer data for each element of the rearranged linked list separated by space.

// // Constraints:
// // 1 <= no. of testcases <= 10
// // 0 <= no. of nodes <= 10^5
// // 0 <= node data <= 10^6

// // Sample Input
// // 1                        // test Cases
// // 12                       // no. of nodes (TC-1)
// // 1 3 3 4 5 5 5 7 9 9 9 9  // node's data

// // Sample Output
// // 1 3 4 5 7 9


// // Solution Approach:
// // ------------------


// // You are given a sorted doubly linked list.
// // Since the list is sorted, duplicate elements appear adjacent to each other.

// // Your task is to remove duplicate nodes such that only one occurrence of each value remains.


// // Example:

// // 1 ↔ 3 ↔ 3 ↔ 4 ↔ 5 ↔ 5 ↔ 5 ↔ 7 ↔ 9 ↔ 9 ↔ 9 ↔ 9

// // Duplicate values:

// // 3 repeated

// // 5 repeated

// // 9 repeated

// // Output:

// // 1 ↔ 3 ↔ 4 ↔ 5 ↔ 7 ↔ 9



// Node* removeDupliSortedDLL(Node* head){
//     if(head == NULL){
//         return head;
//     }

//     Node* dummyNode = new Node(-1);
//     Node* dum = dummyNode;
//     Node* curr = head;
//     while(curr!=nullptr){
//         if(dum->data != curr->data){
//             dum->next = new Node(curr->data);
//             dum = dum->next;
//         }
//         curr = curr->next;
//     }
//     return dummyNode->next;
// }