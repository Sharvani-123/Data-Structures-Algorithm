#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
int getLength(Node *head){
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insertAtHead(int value,Node* &head, Node *&tail){
    //2 cases:
    //case 1: Linked List is empty
    if(head==NULL && tail==NULL){
        //we are creating our first node
        Node *newNode= new Node(value); 
        head=newNode;
        tail=newNode;
    }
    else{
        //case 2: Linked List is not empty
        Node *newNode= new Node(value);
        newNode->next=head;
        head->prev= newNode;
        head= newNode;
    }
}
void insertAtTail(int value,Node *&head, Node *&tail){
    //2 cases:
    //case 1: Linked List is empty
    if(head==NULL && tail==NULL){
        //we are creating our first node
        Node *newNode= new Node(value);
        head=newNode;
        tail=newNode;
    }
    else{
        //case 2: Linked List is not empty
        Node *newNode= new Node(value);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}
void insertAtPos(int pos,int value,Node *head,Node *tail){
    if(pos==1){
        insertAtHead(value,head,tail);
    }
    else if(pos==getLength(head)+1){
        insertAtTail(value,head,tail);
    }
    else{
        Node *newNode= new Node(value);
        Node  *temp=head;
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        newNode->prev=temp;
        newNode->next->prev=newNode;
    }
}
bool searchValue(int value,Node *head,Node *tail){
    Node *temp=head;
    while(temp!=NULL){
        if(temp->data==value){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteFromPos(int pos, Node *&head,Node *&tail){
    //Linked List is empty
    if(head==NULL && tail==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    if(pos==1){
        Node *temp=head;
        head=head->next;
        head->prev= NULL;
        delete temp;
        if(head==tail){
            tail=NULL;
        }
        return;
    }
    if(pos==getLength(head)){
        Node *temp=tail;
        Node *prev= tail->prev;
        prev->next=NULL;
        tail=prev;
        delete temp;
        return;
    }
    else{
        //to delete a node from b/w 
        Node *prev=head;
        for(int i=0;i<pos-2;i++){
            prev=prev->next;
        }
        Node *current= prev->next;
        Node *nextNode= current->next;

        //pointers change
        prev->next=nextNode;
        nextNode->prev=prev;
        //isolate current then delete
        current->prev= NULL;
        current->next=NULL;
        delete current;
    }
}
void reversePrint(Node *tail){
    Node *temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<"<- ";
        temp=temp->prev;
    }
    cout<<"Null"<<endl;
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->  ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node *head=NULL;
    Node *tail=NULL;
    // insertAtHead(1,head,tail);
    // insertAtHead(2,head,tail);
    // insertAtHead(3,head,tail);
    // insertAtHead(4,head,tail);
    insertAtTail(1,head,tail);
    insertAtTail(2,head,tail);
    insertAtTail(3,head,tail);
    insertAtTail(4,head,tail);
    insertAtTail(5,head,tail);
    print(head);
    // reversePrint(tail);
    insertAtPos(2,10,head,tail);
    print(head);
    cout<<searchValue(10,head,tail)<<endl;
    deleteFromPos(6,head,tail);
    print(head);
    return 0;
}