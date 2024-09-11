#include <iostream>
#include <queue>
using namespace std;
int main(){
    deque<int>dq;
    //insertion
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_back(40);
    dq.push_back(50);
    cout<<"Deque elements are: ";
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    dq.pop_front();
    dq.pop_back();  
    cout<<"Deque elements are: ";
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    return 0;
}