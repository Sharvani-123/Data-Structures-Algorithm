#include <iostream>
using namespace std;
bool searchArray(int arr[],int size,int index,int target){
    //2 base case: i) target found ii) target not found
    //for not found
    if(index==size){
        return false;
    }
    //for found
    if(arr[index]==target) return true;
    //recursive call
    return searchArray(arr,size,index+1,target);
}
int main(){
    int arr[]= {10,20,30,40,50,60};
    int size= sizeof(arr)/sizeof(arr[0]);
    int index=0;
    int target=90;
    cout<<searchArray(arr,size,index,target)<<endl;
    return 0;
}