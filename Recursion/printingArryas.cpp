#include <iostream>
using namespace std;
void printArray(int arr[],int size,int index){
    //base case: when we come out of the array,return 
    if(index==size) return;
    //recursive case: print the element at index and then call the function again with index+1
    cout<<arr[index]<<" ";
    printArray(arr,size,index+1);
}
int main(){
    int arr[]= {10,20,30,40,50,60};
    int size= sizeof(arr)/sizeof(arr[0]);
    int index=0;
    printArray(arr,size,index);
    return 0;
}