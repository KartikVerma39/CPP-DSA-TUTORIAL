// #include<iostream>
// using namespace std;
// class stImpl{
//     int top = -1;
//     int st[10];
//     public:
//     bool isFull(){
//         if(top == 9){
//             return true;
//         }
//         return false;
//     }

//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }
//         return false;
//     }

//     void pop(){
//         if(isEmpty()){
//             cout<<"The stack is empty";
//             return;
//         }
//         top = top-1;
//     }

//     void push(int data){
//         if(isFull()){
//             cout<<"The stack is Full";
//             return;
//         }
//         top++;
//         st[top] = data;
//     }

//     int peek(){
//         if(isEmpty()){
//             cout<<"The stack is Full";
//             return -1;
//         }
//         return st[top];
//     }

//     int size(){
//         return top+1;
//     }
// };


// int main(){
//     stImpl stackss;
//     stackss.push(7);
//     stackss.push(3);
//     stackss.push(5);
//     stackss.push(6);
   
//     cout << "Size: " << stackss.size() << endl;
//     cout << "Top: " << stackss.peek() << endl;

//     stackss.pop();
//     cout << "After pop, size: " << stackss.size() << endl;
//     cout << "New top: " << stackss.peek() << endl;

// }




// Stacks Using LinkedList


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         next = nullptr;
//     }
// };

// class Stack{
//     Node* topNode;
//     int currSize;

// public:
//     Stack(){
//         topNode = nullptr;
//         currSize = 0;
//     }

//     bool isEmpty(){
//         if(currSize == 0){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }

//     void push(int value){
//         Node* newNode = new Node(value);
//         newNode->next = topNode;
//         topNode = newNode;
//         currSize++;
//     }

//     int pop(){
//         if(isEmpty()){
//             cout<<"Stack is empty";
//             return -1;
//         }
//         int popped = topNode->data;
//         Node* temp = topNode;
//         topNode = topNode->next;
//         delete temp;
//         currSize--;
//         return popped;
//     }

//     int top(){
//         if(isEmpty()){
//             cout<<"Stack is empty";
//             return -1;
//         }
//         return topNode->data;
//     }

//     int size(){
//         return currSize;
//     }

// };

// int main(){
//      Stack st;

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     cout << "Top element: " << st.top() << endl;
//     cout << "Popped: " << st.pop() << endl;
//     cout << "Top after pop: " << st.top() << endl;
//     cout << "Stack size: " << st.size() << endl;

//     return 0;
// }




// Implement a Queue Using Stack


#include<iostream>
#include<stack>
using namespace std;
class q{
    stack<int>st1 , st2;

    public:
    void push(int x){
        st1.push(x);
    }

    void pop(){
        if(!st2.empty()){
            st2.pop();
        }
    else if(st2.empty()){
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        st2.pop();
        }
    }

    int top(){
        if(!st2.empty()){
            return st2.top();
        }

    else if(st2.empty()){
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        return st2.top();
    }
}

};

int main(){
    q q1;
    q1.push(5);
    q1.push(2);
    q1.push(3);
    q1.push(1);
    q1.pop();
    q1.push(7);
    q1.pop();
    cout<<q1.top();
}