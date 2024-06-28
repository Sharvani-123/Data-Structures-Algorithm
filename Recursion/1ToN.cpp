#include <iostream>
using namespace std;
void printCounting(int i,int N){
    if(i>N) return ;
    cout<<i<<endl;
    printCounting(i+1,N);
}
int main(){
    int N;
    cout<<"Enter N: "<<endl;
    cin>>N;
    printCounting(1,N);

    return 0;
}