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


// #include<iostream>
// #include<queue>
// using namespace std;

// class Node {
//     public:
//         int data;
//         Node* left;
//         Node* right;

//     Node(int data){
//         this->data = data;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// Node* buildTree(Node* root){
//     cout<<"Enter the data: "<<endl;
//     int data;
//     cin>>data;
//     root = new Node(data);

//     if(data == -1){
//         return NULL;
//     }

//     cout<<"Enter the data for inserting in left Node "<<data<<endl;
//     root->left = buildTree(root->left);

//     cout<<"Enter the data for inserting in right Node "<<data<<endl;
//     root->right = buildTree(root->right);
//     return root;

// }

// // Level Order Traversal

// void levelOrderTraversal(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL); // Seperator

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
//         cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }

//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
// }


// void inorder(Node* root){
//     if(root == NULL){
//          return;
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

// void buildFromLevelOrder(Node*& root){
//     queue<Node*>q;
//     cout<<"Enter data for rrot"<<endl;
//     int data;
//     cin>>data;
//     root = new Node(data);
//     q.push(root);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();
//         cout<<"Enter left node for: "<<temp->data<<endl;
//         int leftData;
//         cin>>leftData;

//         if(leftData != -1){
//             temp->left = new Node(leftData);
//             q.push(temp->left);
//         }

//         cout<<"Enter right node for: "<<temp->data<<endl;
//         int rightData;
//         cin>>rightData;

//         if(rightData != -1){
//             temp->right = new Node(rightData);
//             q.push(temp->right);
//         }

//     }

// }

// int main(){
//     Node* root = NULL;

//     buildFromLevelOrder(root);
//     levelOrderTraversal(root);
//     // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

//     // root = buildTree(root);

//     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//     // level Order Traversal
//     // cout<<"Printing the level Order Traversal : "<<endl;
//     // levelOrderTraversal(root);

//     // cout<<"Inorder Traversal is : "<<endl;
//     // inorder(root);

//     // cout<<"Preorder Traversal is : "<<endl;
//     // Preorder(root);

//     // cout<<"Postorder Traversal is : "<<endl;
//     // Postorder(root);

// }





// Create a Binary Tree


// #include<iostream>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// Node* createBinaryTree(Node* root){
//     cout<<"Enter the value: ";
//     int data;
//     cin>>data;
//     root = new Node(data);
//     if(data == -1){
//         return NULL;
//     }

//     cout<<"Enter the value at the left of "<<data<<endl;
//     root->left = createBinaryTree(root->left);
//     cout<<"Enter the value at the right of "<<data<<endl;
//     root->right = createBinaryTree(root->right);
//     return root;
// }

// void printTree(Node* root){
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
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// void inOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }

// void preOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void postOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
// }

// void buildLevelOrder(Node* &root){
//     queue<Node*>q;
//     cout<<"Enter the value : "<<endl;
//     int data;
//     cin>>data;
//     root = new Node(data);
//     q.push(root);
//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();
//         cout<<"Enter left element of "<<temp->data<<endl;
//         int leftData;
//         cin>>leftData;

//         if(leftData != -1){
//             temp->left = new Node(leftData);
//             q.push(temp->left);
//         }

//         cout<<"Enter right element of "<<temp->data<<endl;
//         int rightData;
//         cin>>rightData;

//         if(rightData != -1){
//             temp->right = new Node(rightData);
//             q.push(temp->right);
//         }
//     } 
// }

// void reverseLevelOrder(Node* &root){
//     queue<Node*>q;
//     q.push(root);
//     vector<int>ans;
//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();
//         ans.push_back(temp->data);
//         if(temp->right){
//             q.push(temp->right);
//         }
//         if(temp->left){
//             q.push(temp->left);
//         }
//     }
//     reverse(ans.begin() , ans.end());

//     for(int i = 0 ; i < ans.size() ; i++){
//         cout<<ans[i]<<" ";
//     }
// }

// void inorderIterative(Node* root){
//     if(root == NULL){
//         return;
//     }

//     stack<Node*>st;
//     Node* curr = root;

//     while(curr!=NULL || !st.empty()){
//         while(curr!=NULL){
//             st.push(curr);
//             curr = curr->left;
//         }

//         curr = st.top();
//         st.pop();

//         cout<<curr->data<<" ";
//         curr = curr->right;
//     }
// }


// void preOrderTraversal(Node* root){
//     if(root == NULL){
//         return;
//     }

//     stack<Node*>st;
//     st.push(root);
//     while(!st.empty()){
//         Node* curr = st.top();
//         st.pop();

//         cout<<curr->data<<" ";

//         if(curr->right){
//             st.push(curr->right);
//         }
//         if(curr->left){
//             st.push(curr->left);
//         }
//     }
// }


// void postOrderIterative(Node* root){
//     if(root == NULL){
//         return;
//     }

//     stack<Node*>s1,s2;
//     s1.push(root);

//     while(!s1.empty()){
//         Node* curr = s1.top();
//         s1.pop();

//         s2.push(curr);

//         if(curr->left){
//             s1.push(curr->left);
//         }
//         if(curr->right){
//             s1.push(curr->right);
//         }
//     }

//     while(!s2.empty()){
//         cout<<s2.top()->data<<" ";
//         s2.pop();
//     }
// }

// int main(){
//     Node* root = NULL;
//     // root = createBinaryTree(root);
//     // printTree(root);
//     // inOrder(root);
//     // postOrder(root);
//     // preOrder(root);

//     buildLevelOrder(root);
//     reverseLevelOrder(root);
//     // printTree(root);

// }



// Create a Binary Tree


#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createBinaryTree(Node* root){
    cout<<"Enter the value : ";
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    root = new Node(data);
    cout<<"Enter the left data to the "<<data<<endl;
    root->left = createBinaryTree(root->left);
    
    cout<<"Enter the right data to the "<<data<<endl;
    root->right = createBinaryTree(root->right);
    
    return root;
}

void print(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
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

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void buildLevelOrderTraversal(Node* &root){
    queue<Node*>q;
    cout<<"Enter the data : ";
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<"Enter the value to left of "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the value to right of "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

void reverseLevelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    vector<int>arr;
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        arr.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    reverse(arr.begin() , arr.end());
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    Node* root = NULL;
    // root = createBinaryTree(root);
    buildLevelOrderTraversal(root);
    reverseLevelOrder(root);
    // print(root);
}
