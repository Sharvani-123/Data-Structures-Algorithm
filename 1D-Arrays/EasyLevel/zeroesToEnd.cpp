//maintain the relative order of the elements while moving the zeroes to the end
#include <iostream>
using namespace std;
void zeroesToEnd(int arr[],int n){
    int j;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
} 

int main(){
   int arr[]={1,0,2,0,0,2,3};
   int n=sizeof(arr)/sizeof(arr[0]);
   zeroesToEnd(arr,n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}