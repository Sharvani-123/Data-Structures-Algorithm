#include <iostream>
using namespace std;
void reversePrintArray(int arr[],int size,int index){
    //base case: when we come out of the array,return 
    if(index==size) return;
    //recursive case: keep calling the function untit base case is hit.
    reversePrintArray(arr,size,index+1);
    // prints as per LIFO.
    cout<<arr[index]<<" ";
    
}
int main(){
    int arr[]= {10,20,30,40,50,60};
    int size= sizeof(arr)/sizeof(arr[0]);
    int index=0;
    reversePrintArray(arr,size,index);
    return 0;
}