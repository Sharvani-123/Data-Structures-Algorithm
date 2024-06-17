#include <iostream>
#include <algorithm>
using namespace std;
int missingNum(int arr[],int n){
    int ans=-1;
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int number= arr[mid];
        int index=mid;
        int diff=number-index;
        if(diff==0){
            s=mid+1;
        }
        else if(diff==1){
            ans=mid;
            e=mid-1;
        }
    }
    if(ans==-1){
        return n;
    }
    return ans;
}
int main(){
    int arr[6]={4,5,6,2,3,1};
    int size= sizeof(arr)/sizeof(int);
    sort(arr,arr+size);
    int missNum= missingNum(arr,size);
    cout<<missNum<<endl;
    return 0;
}