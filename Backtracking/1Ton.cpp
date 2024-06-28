#include <iostream>
using namespace std;
void printForwardCount(int i,int N){
    if(i<1) return;
    printForwardCount(i-1,N);
    cout<<i<<endl;
}
int main(){
    int N;
    cout<<"Enter N: "<<endl;
    cin>>N;
    printForwardCount(N,N);
    return 0;
}