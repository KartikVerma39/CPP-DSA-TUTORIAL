// #include<iostream>
// using namespace std;
// class QueueImp{
//     private:
//     int size = 10;
//     int q[10];
//     int currSize = 0;
//     int start = -1;
//     int end = -1;
//     public:
//     bool isFull(){
//         if(currSize == size){
//             return 1;
//         }
//         return 0;
//     }

//     bool isEmpty(){
//         if(currSize == 0){
//             return 1;
//         }
//         return 0;
//     }

//     void push(int data){
//         if(isFull()){
//             cout<<"The queue is FULL"<<endl;
//             return;
//         }
//         if(currSize == 0){
//             start = 0;
//             end = 0;
//         }
//         else{
//             end = (end+1)%size;
//         }
//         q[end] = data;
//         currSize++;
//     }

//     int pop(){
//         if(isEmpty()){
//             cout<<"The queue is FULL"<<endl;
//             return -1;
//         }
//         int element = q[start];
//         if(currSize == 1){
//             start = -1;
//             end = -1;
//         }
//         else{
//             start = (start+1)%size;
//         }
//         currSize--;
//         return element;
//     }

//     int top(){
//         if(isEmpty()){
//             cout<<"The array is empty"<<endl;
//             return -1;
//         }
//         return q[start];
//     }

//     int queueSize(){
//         return currSize;
//     }
// };
// int main(){
//      QueueImp q;

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout << "Front element: " << q.top() << endl;
//     cout << "Popped: " << q.pop() << endl;
//     cout << "Front element after pop: " << q.top() << endl;
//     cout << "Queue size: " << q.queueSize() << endl;
// }



// Queue Using Linked List


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// class QueueLL{
//     private:
//     Node* start;
//     Node* end;
//     int size = 0;



//     public:

//     QueueLL() {
//     start = nullptr;
//     end = nullptr;
//     size = 0;
//     }

//     void push(int data){
//         Node* newNode = new Node(data);
//         if(start == NULL){
//             start = newNode;
//             end = newNode;
//         }
//         else{
//         end->next = newNode;
//         end = newNode;
//         }
//         size++;
//     }

//     int pop(){
//         if(start==NULL){
//             return -1;
//         }
//         int popped = start->data;
//         Node* temp = start;
//         start = start->next;
//         delete temp;
//         size--;
//         if(size == 0) end = nullptr; 
//         return popped;
//     }

//     int top(){
//         if(start == NULL){
//             return -1;
//         }
//         else{
//             return start->data;
//         }
//     }

//     int currSize(){
//         return size;
//     }
// };

// int main(){
//      QueueLL q;

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout << "Front: " << q.top() << endl;   // 10
//     cout << "Dequeued: " << q.pop() << endl; // 10
//     cout << "Front after dequeue: " << q.top() << endl; // 20
//     cout << "Queue size: " << q.currSize() << endl; // 2

// }



// Implement Stack Using Queue


#include<iostream>
#include<queue>
using namespace std;
class st{
    private:
    queue<int>q;
    int data;
    int size;

    public:
    st(){
        size = 0;
    }

    void push(int data){
        q.push(data);
        size++;
        for(int i = 0 ; i<size-1 ; i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop(){
        q.pop();
    }

    int top(){
        return q.front();
    }
};

int main(){
    st s;
    s.push(2);
    s.push(1);
    s.push(3);
    s.push(4);

    cout<<s.top();
}
