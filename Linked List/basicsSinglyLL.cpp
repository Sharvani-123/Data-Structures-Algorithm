#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};
int getlength(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
Node *insertAtHead(int value, Node *&head, Node *&tail)
{
    // Linked-List is empty -> head and tail both point to Null
    // This means we are creating first node of Linked-List
    if (head == NULL && tail == NULL)
    {
        // step1: create a new node
        Node *newNode = new Node(value);
        // step2: make head and tail point to this node
        head = newNode;
        tail = newNode;
    }
    else
    {
        // Linked List is not empty
        // Node is present already
        // for insertion at head:
        // step1: create a new node
        Node *newNode = new Node(value);
        // step2: (connect the newNode to head node)
        newNode->next = head;
        // step3: update head
        head = newNode;
    }
    return head;
}
Node *insertAtTail(int value, Node *&head, Node *&tail)
{
    // Linked-List is empty -> head and tail both point to Null
    // This means we are creating first node of Linked-List
    if (head == NULL && tail == NULL)
    {
        // step1: create a new node
        Node *newNode = new Node(value);
        // step2: make head and tail point to this node
        head = newNode;
        tail = newNode;
    }
    else
    {
        // Linked List is not empty
        // Node is present already
        // for insertion at tail:
        // step1: create a new node
        Node *newNode = new Node(value);
        // step2: connect the tail node to newNode
        tail->next = newNode;
        // step3: update Tail
        tail = newNode;
    }
    return head;
}
Node *insertAtPos(int pos, int value, Node *&head, Node *&tail)
{
    int length = getlength(head);
    if (pos == 1)
    {
        head = insertAtHead(value, head, tail);
    }
    else if (pos == length + 1)
    {
        head = insertAtTail(value, head, tail);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int searchTarget(Node *head, int value)
{   
    int pos= 0;
    Node *temp = head;
    while (temp != NULL)
    {
        pos++;
        if (temp->data == value){
            return pos;
        }
        
        temp = temp->next;
    }
    return -1;
}
void deleteNode(int pos, Node *&head,Node *&tail){
    if(head==NULL && tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(pos==1){
        Node *temp=head;
        head=head->next;
        delete temp;

        //what if the linked list had only a single node: 
        if(head==tail){
            tail=NULL;
        }
        return;
    }
    else{
        //deleting a node from b/w and end
        Node *prev=head;
        for(int i=0;i<pos-2;i++){
            prev=prev->next;
        }
        Node *currentNode= prev->next;
        Node *nextNode= currentNode->next;
        prev->next=nextNode;
        delete currentNode;
    }  
}
int main()
{
    // dynamic memory allocation
    //  Node *first= new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    // Linked Lisst is empty
    head = insertAtHead(10, head, tail);
    // 10->NULL
    // print(head);
    head = insertAtHead(20, head, tail);
    // 20->10->NULL
    // print(head);
    head = insertAtHead(30, head, tail);
    // 30->20->10->NULL
    // print(head);
    head = insertAtTail(80, head, tail);
    // 30->20->10->80->NULL
    // print(head);
    head = insertAtPos(3, 100, head, tail);
    // 30->20->100->10->80->NULL
    print(head);
    cout<<"Target found at pos: "<< searchTarget(head, 100) << endl;
    deleteNode(1,head,tail);
    print(head);
    deleteNode(4,head,tail);
    print(head);
    deleteNode(2,head,tail);
    print(head);
    return 0;
}