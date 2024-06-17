#include <iostream>
using namespace std;
void sortNeg(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }
        else if(arr[j]<0){
            swap(arr[i],arr[j]);
        }
    }
}
int main(){
    int arr[6]={1,2,-3,4,-5,6};
    int size=6;
    sortNeg(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}