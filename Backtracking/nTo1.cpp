#include <iostream>
using namespace std;
void printBackwardCount(int i,int N){
    if(i>N) return;
    printBackwardCount(i+1,N);
    cout<<i<<endl;
}
int main(){
    int N;
    cout<<"Enter N: "<<endl;
    cin>>N;
    printBackwardCount(1,N);
    return 0;
}