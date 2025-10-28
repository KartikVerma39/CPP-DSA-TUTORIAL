// Build a Tree , BFS(Level Order Traversal)

// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int d){
//         this->data = d;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// Node* buildTree(Node* root){

//     cout<<"Enter the data: "<<endl;
//     int data;
//     cin>>data;
//     root  = new Node(data);

//     if(data == -1){
//         return NULL;
//     }

//     cout<< "Enter data for inserting in left "<<data<<endl;
//     root->left = buildTree(root->left);
//     cout<<"Enter data for inserting in right "<<data<<endl;
//     root->right = buildTree(root->right);
//     return root;
// }


// void levelOrderTraversal(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();
        
//         if(temp == NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<temp->data<<" ";
//             if(temp->left){
//             q.push(temp->left);
//         }

//         if(temp->right){
//             q.push(temp->right);
//         }
//         }

        
//     }
// }   

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// void Preorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     Preorder(root->left);
//     Preorder(root->right);
// }

// void Postorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     Postorder(root->left);
//     Postorder(root->right);
//     cout<<root->data<<" ";
// }


// int main(){
//     Node* root = nullptr;
//     root = buildTree(root);
//     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//     cout<<"Printing the level order traversal output : "<<endl;
//     levelOrderTraversal(root);
//     cout<<"Inorder traversal : "<<endl;
//     inorder(root);
//     cout<<endl;
//     cout<<"Preorder traversal : "<<endl;
//     Preorder(root);
//     cout<<endl;
//     cout<<"Postorder traversal : "<<endl;
//     Postorder(root);
// }




// Create a Binary Tree


#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* buildTree(Node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data for inserting in left Node "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data for inserting in right Node "<<data<<endl;
    root->right = buildTree(root->right);
    return root;

}

// Level Order Traversal

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL); // Seperator

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


void inorder(Node* root){
    if(root == NULL){
         return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


void Preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);

}

void Postorder(Node* root){
    if(root == NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";

}

void buildFromLevelOrder(Node*& root){
    queue<Node*>q;
    cout<<"Enter data for rrot"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }

    }

}

int main(){
    Node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    // root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level Order Traversal
    // cout<<"Printing the level Order Traversal : "<<endl;
    // levelOrderTraversal(root);

    // cout<<"Inorder Traversal is : "<<endl;
    // inorder(root);

    // cout<<"Preorder Traversal is : "<<endl;
    // Preorder(root);

    // cout<<"Postorder Traversal is : "<<endl;
    // Postorder(root);

}