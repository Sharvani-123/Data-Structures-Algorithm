#include <iostream>
using namespace std;

class Deque{
    private:
        int *arr;
        int n;
        int front;
        int rear;
    public:
        Deque(int size){
            arr = new int[size];
            this->n= size;
            front=-1;
            rear=-1;
        }

        void pushFront(int val){
            //queue is empty
            if(front == -1){
                front = 0;
                rear = 0;
                arr[front] = val;
            }
            //no space for left pushing in front
            else if(front == 0){
                cout<<"Overflow, can't push"<<endl;
            }
            //for general case
            else{
                front--;
                arr[front] = val;
            }
        }

        void pushBack(int val){
            if(rear==n-1){
                cout<<"Queue is full,can't push !"<<endl;
            }
            //inserting 1st element of the stack
            else if(front==-1){
                front=0;
                rear=0;
                arr[rear]=val;
            }
            else{
                rear++;
                arr[rear]=val;
            }
        }

        void popFront(){
             if(front==-1){
                cout<<"Queue is empty,can't pop !"<<endl;
            }
            else if(front==rear){
                front =-1;
                rear =-1;
            }
            else{
                arr[front]=-1;
                front++;
            }
        }

        void popBack(){
            //no element present
            if(front==-1){
                cout<<"Queue is empty,can't pop !"<<endl;
            }
            //only one element present
            else if(front==rear){
                arr[front]=-1;
                front =-1;
                rear =-1;
            }
            else{
                arr[rear]=-1;
                rear--;
            }
        }

        void print(){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
};
int main(){
    Deque dq(5);

    dq.pushFront(10);
    dq.print();
    dq.pushBack(20);
    dq.print();
    dq.pushFront(30);
    dq.print();  
    dq.pushBack(40);
    dq.print();
    dq.popFront();
    dq.print(); 
    dq.popBack();
    dq.print();
    dq.pushFront(60);
    dq.print();
    return 0;
} 