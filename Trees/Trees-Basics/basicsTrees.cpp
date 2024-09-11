#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node (int val){
        this->data=val;
        left= NULL;
        right= NULL;
    }
};
//Tree creation
Node *createTree(){
         cout<<"Enter the value for Node"<<endl;
         int value;
         cin>>value;
         if(value==-1){
            return NULL;
         }
         else{
            //valid value
            Node *root = new Node(value);
            cout<<"Adding left child of "<<value<<endl;
            root->left = createTree();
            cout<<"Adding right child of "<<value<<endl;
            root->right = createTree();
            return root;
         }
    }
void preOrderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    //NLR
    //N
    cout<<root->data<<endl;
    //L->left subtree
    preOrderTraversal(root->left);
    //R->right subtree
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    //LNR
    inOrderTraversal(root->left);
    //N
    cout<<root->data<<" ";
    //R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root){
     if(root==NULL){
        return;
     }
     //LRN
     //L
     postOrderTraversal(root->left);
     //R
     postOrderTraversal(root->right);
     //N 
     cout<<root->data<<endl;
}

void levelOrderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node *>q;
    
    //initial state
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *front= q.front();
        q.pop();
        if(front==NULL){
            //all the nodes on the same level are popped out
            cout<<endl;
            //if all the nodes on this level are popped
            //it means their children on the next level has also 
            //been already inserted in the queue
            //therefore push NULL if the queue is not empty
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<front->data<<" ";

        //insert its child at the end of the queue
        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
        }
    }
}
int main(){
    Node *root;
    root= createTree();
    // 10 50 40 -1 -1 -1 30 20 -1 -1 -1

    //level order traversal: 10 50 30 40 20
    cout<<"Level Order Traversal: "<<endl;
    levelOrderTraversal(root);
    return 0;
}   