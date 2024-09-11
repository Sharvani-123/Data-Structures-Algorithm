#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverseInK(queue<int>&q, int k, int currSize){
    if(currSize>=k){
        //pop k elements and push them into stack
        //then pop them from the stack and push them back into the queue
        stack<int> s;
        for(int i=0;i<k;i++){
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        currSize-=k;
        //now the first k elements are reversed
        reverseInK(q,k,currSize);
    }
    else{
        // number of remaining elements in the queue is less than k
        //so no need to reverse them
        //just pop them and push them back in the queue as it is
        for(int i=0;i<currSize;i++){
            q.push(q.front());
            q.pop();
        }
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.push(60); 
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);
    int k=3;
    int currSize = q.size();
    reverseInK(q,k,currSize);
    //printing
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}