#include <iostream>
using namespace std;
void sort(int arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
        }
        else if(arr[j]==1){
            j--;
        }

    }
}
int main(){
    int arr[9]={0,1,1,0,0,1,1,0,1};
    int size=9;
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}