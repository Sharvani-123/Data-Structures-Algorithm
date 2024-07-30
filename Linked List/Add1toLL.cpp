// Add 1 to the number represented as LL using recursion
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
void solve(Node *head,int &carry){
    if(!head) return;
    solve(head->next,carry);

    int sum= head->data +carry;
    int digit= sum%10;
    carry= sum/10;
    head->data= digit;
}
Node *add1(Node *head,int &carry){
    solve(head,carry);
    if(carry){
        Node *newHead= new Node(carry);
        newHead->next=head;
        head= newHead;
    }
    return head;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    insertAtTail(9,head,tail);
    insertAtTail(9,head,tail);
    insertAtTail(9,head,tail);
    insertAtTail(9,head,tail);
    insertAtTail(9,head,tail);
    print(head);
    int carry=1;
    head= add1(head,carry);
    print(head);
    return 0;
}