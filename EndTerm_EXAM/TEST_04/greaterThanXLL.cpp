


// Q3. Prize Manager

// Imagine you have a chain (a linked list) of individual quiz scores (nodes) from your students. You are giving out a special prize, but only for scores that are less than or equal to a specific limit, X.

// Your task is to go through this list of scores and throw out (delete) any score that is too high (greater than X). You only keep the passing scores that qualify for the prize.

// Complete the function deleteGreater() in the editor, which will take head of the linked list as parameter, and it returns the head of a new list, in which no element (node) should have value greater than X.

// Input Format

// The first line contains an integer N, the size of the list.
// The second line contains an integer X.
// Each of the next N lines contains an integer list[i] where 0 ≤ i < N.

// Output Format

// Print the node values of the resultant list separated with space.

// Constraints

// 0 ≤ N ≤ 10^5
// 1 ≤ X, list[i] ≤ 1000

// Sample Input

// 6  // N
// 3  // X
// 2  // Elements of list
// 4
// 3
// 6
// 5
// 1

// Sample Output

// 2 3 1

// Explanation:

// Nodes with the value 4, 6, 5 are deleted from the list, as they are greater than 3.



// Node* deleteGreater(Node* head, int X) {
//     // Step 1: Remove nodes from the beginning if they are > X
//     while (head != NULL && head->data > X) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }

//     // If list becomes empty
//     if (head == NULL) return NULL;

//     // Step 2: Remove nodes from the rest of the list
//     Node* curr = head;
//     while (curr != NULL && curr->next != NULL) {
//         if (curr->next->data > X) {
//             Node* temp = curr->next;
//             curr->next = curr->next->next;
//             delete temp;
//         } else {
//             curr = curr->next;
//         }
//     }

//     return head;
// }
