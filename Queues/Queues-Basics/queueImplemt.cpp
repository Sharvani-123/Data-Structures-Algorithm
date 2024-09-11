#include <iostream>
using namespace std;

class Queue{
    private:
        int *arr;
        int n;
        int front;
        int rear;
    public:
        Queue(int size){
            arr= new int[size];
            n=size;
            front=-1;
            rear=-1;
        }

        void push(int val){
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

        void pop(){
            if(front==-1){
                cout<<"Queue is empty,can't pop !"<<endl;
            }
            else if(front==rear){
                front =-1;
                rear =-1;
            }
            else{
                front++;
            }
        }

        int getFront(){
            if(front==-1){
                cout<<"Queue is empty,can't get front !"<<endl;
            }
            else{
                return arr[front];
            }  
        }

        int getRear(){
            if(rear==-1){
                cout<<"Queue is empty,can't get rear !"<<endl;
            }
            else{
                return arr[rear];
            }
        }

        int getSize(){
            if(front==-1){
                return 0;
            }
            else{
                return rear-front+1;
            }
        }

        bool isEmpty(){
            if(front==-1 && rear==-1)
            {
                return true;
            }
            else{
                return false;
            }
        }

};

int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"size: "<<q.getSize()<<endl;
    cout<<"Front elem: "<<q.getFront()<<endl;
    cout<<"Rear elem: "<<q.getRear()<<endl;
    q.pop();
    cout<<"size: "<<q.getSize()<<endl;
    cout<<"Front elem: "<<q.getFront()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<"size: "<<q.getSize()<<endl;
    q.pop();
    
    return 0;
}