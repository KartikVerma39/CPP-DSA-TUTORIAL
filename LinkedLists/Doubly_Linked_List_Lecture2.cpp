#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data , Node* next , Node* back){
        this->data = data;
        this->next = next;
        this->back = back;
    }   

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }
};

Node* convertArrto2DLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i] , NULL , prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}


void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* deleteHead(Node* head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head; 
}

Node* deleteTail(Node* head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;

}

Node* deleteKthElement(Node* head , int k){
    if(head == NULL){
        return NULL;
    }
    int count = 0;
    Node* kNode = head;
    while(kNode != NULL){
        count++;
        if(count == k){
            break;
        }
        kNode = kNode->next;
    }
    Node* prev = kNode->back;
    Node* front = kNode->next;

    if(prev == NULL && front == NULL){
        return NULL;
    }

    else if(prev == NULL){
        deleteHead(head);
        return head;
    }

    else if(front == NULL){
        deleteTail(head);
        return head;
    }
    prev->next = front;
    front->back = prev;

    kNode->next = nullptr;
    kNode->back = nullptr;

    delete kNode;
    return head;

}


void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    }

    prev->next = front;
    front->back = prev;

    temp->back = nullptr;
    temp->next = nullptr;

    delete temp; 

}

Node* insertAtHead(Node* head , int el){
    Node* newHead = new Node(el , head , nullptr);
    head->back = newHead;
    return newHead;
}

Node* insertBeforeTail(Node* head , int el){
    if(head->next == NULL){
        return insertAtHead(head , el);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newT = new Node(el , temp , prev);
    prev->next = newT;
    temp->back = newT;
    return head;
}

Node* insertBeforeK(Node* head , int k , int el){
    if(k == 1){
        return insertAtHead(head ,el);
    }
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        if(count == k){
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* final = new Node(el , temp , prev);
    prev->next = final;
    temp->back = final;
    return head;
}

void insertBeforeNode(Node* node , int val){
    Node* prev = node->back;
    Node* newNode = new Node(val , node , prev);
    prev->next = newNode;
    node->back = newNode;
}

int main(){
    vector<int>arr = {12,5,8,7};
    Node* head = convertArrto2DLL(arr);
    // head = deleteHead(head);
    // head = deleteTail(head);
    // head = deleteKthElement(head , 3);
    // deleteNode(head->next);
    // head = insertAtHead(head , 3);
    // head = insertBeforeTail(head , 3);
    // head = insertBeforeK(head , 3 , 6);
    insertBeforeNode(head->next , 100);
    print(head);

}