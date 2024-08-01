// implementing two stacks in an array
#include <iostream>
using namespace std;
class Stack{
    public:
        int *arr;
        int size;
        int top1;
        int top2;

    Stack(int capacity){
        arr= new int[capacity];
        size=capacity;
        top1=-1;
        top2=size;
    }

    void push1(int value){
        //if space not availbale->stack overflow
        if(top2-top1==1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]=value;
        }
    }
    void push2(int value){
        //stack is not empty->stack overflow
        if(top2-top1==1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]=value;
        }
    }   
    void pop1(){
        //if stack is empty->stack underflow
        if(top1==-1){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            arr[top1]=0;
            top1--;
        }
    }
    void pop2(){
        //stack underflow
        if(top2==size){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            arr[top2]=0;
            top2++;
        }
    }
    void print(){
        cout<<"Top1: "<<top1<<endl;
        cout<<"Top2: "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
int main(){
    Stack s(5);
    s.push1(10);
    s.push2(60);
    s.push1(30);
    s.push2(40);
    s.push2(35);
    s.push2(43);
    s.print();

    return 0;
}
