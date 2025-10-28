// #include<iostream>
// #include<vector>
// using namespace std;
// struct Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int data1 , Node* next1){
//         data = data1;
//         next = next1;
//     }
//     public:
//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };
// int main(){
//     vector<int>arr = {2,5,8,7};
//     Node* y =new Node(arr[0]);
//     cout<<y->data;
// }

 
  

#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }


};
Node* converarr2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int checkIfPresent(Node* head , int val){
    Node* temp = head;
    while(temp!=nullptr){
        temp = temp->next;
        if(temp->data == val){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

Node* removesHead(Node* head){
    if(head == nullptr){
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head= head->next;
    }
    cout<<endl;
}


Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* removeK(Node* head , int k){
    if(head == NULL){
        return head;
    }
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}



Node* removeelement(Node* head , int el){
    if(head == NULL){
        return head;
    }
    if(head->data == el){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        if(temp->data == el){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


Node* insertHead(Node* head ,int el){
    Node* temp = new Node(el , head);
    return temp;
}

Node* insertTail(Node* head , int el){
    if(head == nullptr){
        return head;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(el);
    temp->next = newNode;
    return head;

}


Node* insertK(Node* head , int el , int k){
    if(head == NULL){
        if(k == 1)return new Node(el);
        else return NULL;
    }
    if(k == 1){
       return new Node(el,head); 
    }
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        if(count == k-1){
            Node* x = new Node(el , temp->next);
            temp->next = x;
            break;
        }
    temp = temp->next;
}
return head;
}




Node* insertValueBefore(Node* head , int el , int val){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
       return new Node(el,head); 
    }

    Node* temp = head;
    while(temp->next!=NULL){
        if(temp->next->data == val){
            Node* x = new Node(el , temp->next);
            temp->next = x;
            break;
        }
    temp = temp->next;
}
return head;
}






int main(){

    vector<int>arr = {12,5,8,7};
    Node* head = converarr2LL(arr);
    // cout<<head->data;
    // head = removeK(head , 3);
    // head = removeelement(head , 7);
    // head = insertHead(head , 33);
    // head = insertTail(head , 33);
    // head = insertValueBefore(head , 100 , 7);

    print(head);
}




