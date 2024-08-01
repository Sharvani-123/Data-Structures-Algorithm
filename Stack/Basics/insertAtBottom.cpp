#include <iostream>
#include <stack>
using namespace std;
//insert without losing any other value from the stack
void insertAtBottom(stack<int>&s,int value){
    //base case
    if(s.empty()){
        //insert value
        s.push(value);
        return;
    }

    int topElement =s.top();
    s.pop();
    insertAtBottom(s,value);
    //insert back the popped value
    s.push(topElement);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int value= 13;
    insertAtBottom(s,value);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
} 