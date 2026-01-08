 
// Q5.  Given list is circular or not

// In circular list the last node points to the first node creating a loop of nodes. Now, given a pointer to the head node of a linked list, find out if it is circular or not.

// Complete the function isCircular() given in the editor, which takes the head of the list as parameter and returns 1 if the linked list is circular and 0 otherwise.

// Note: If the linked list is empty, then consider it as a circular linked list.

// Your solution must be optimized otherwise you may get an error "Time Limit Exceeded".

// Input

// The functions isCircular() takes the head node of a linked list as input.

// Output

// Return 1 if the given list is circular, else return 0.

// Constraints
// 0 <= no. of nodes <= 10^5
// 0 <= node data <= 10^6



// bool circularOrNot(Node* head){
//     if(head == NULL){
//         return false;
//     }

//     Node* slow = head;
//     Node* fast = head;
//     while(fast!=head && fast->next!=head){
//         slow = slow->next;
//         fast = fast->next->next;
//         if(slow == fast){
//             while(slow->next!=head){
//                 slow = slow->next;
//                 if(slow == fast){
//                     return false;
//                 }
//             }
//             return true;
//         }
//     }
//     return false;
// }




// bool circularOrNot(Node* head){
//     if(head == nullptr){
//         return 0;
//     }

//     Node* curr = head;
//     while(curr!=nullptr && curr != head){
//         curr = curr->next;
//     }
//     if(head == curr){
//         return 1;
//     }
//     return 0;
// }