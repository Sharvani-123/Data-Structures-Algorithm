
#include <iostream>
using namespace std;
int oddOccurIndex(int arr[],int n){
    int s=0,e=n-1;
    int store=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
         if ((mid == 0 || arr[mid] != arr[mid - 1]) &&
            (mid == n - 1 || arr[mid] != arr[mid + 1])) {
            return mid;
            }
        else if((mid%2==0 && arr[mid]==arr[mid+1])|| (mid%2!=0 && arr[mid]==arr[mid-1])){
            s=mid+1;
        }
        else{
            store=mid;
            e=mid-1;
        }
    }
    return store;
    }
int main(){
    int arr[]={0,1,1,2,2,3,3,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<oddOccurIndex(arr,n);

    return 0;
}