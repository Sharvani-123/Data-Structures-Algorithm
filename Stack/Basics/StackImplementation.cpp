//Stack implementation from scratch
#include <iostream>
using namespace std;
class Stack{
    public:
        int *arr;
        int size;
        int top;

        Stack(int capacity){
            arr= new int[capacity];
            size= capacity;
            top=-1;
        }
        void push(int val){
            if(top==size-1){
                //stack is already full
                //if we push in this case, stack overflow will happen
                cout<<"Stack Overflow: Cannot push "<<val<<" onto a full stack.";
            }
            else{
                top++;
                arr[top]= val;
            }
        }
        void pop(){
            if(top==-1){
                //there's no element in the stack, can't pop
                cout<<"Stack Underflow: Cannot pop from an empty stack.";
            }
            else{
                top--;
            }
        }
        int getSize(){
                return top+1;
        }
        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
        int getTop(){
            if(top==-1){
                cout<<"There's no value at the top,stack is empty";
                return -1;
            }
            else{
                return arr[top];
            }
        }
        void print(){
            cout<<"Printing Stack"<<endl;
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
};
int main(){ 
    Stack s(5);
    s.push(10); 
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);
    s.print();
    s.push(50);
    s.print();
    s.push(60);
    s.print();
    cout<<s.getTop()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.print();
    cout<<s.getSize()<<endl;
    s.pop();
    return 0;
}