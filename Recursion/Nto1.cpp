#include <iostream>
using namespace std;
void countingBackward(int i,int N){
    if(i<1) return;
    cout<<i<<endl;
    countingBackward(i-1,N);
}
int main(){
    int N;
    cout<<"Enter N: "<<endl;
    cin>>N;
    countingBackward(N,N);
    return 0;
}