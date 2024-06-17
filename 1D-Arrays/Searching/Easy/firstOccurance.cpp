#include <iostream>
using namespace std;
void findFirstOccur(int arr[], int n, int target,int &ansIndex){
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            ansIndex=mid;
            e=mid-1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}
int main(){
    int arr[]={10,20,20,20,30,40,50};
    int size=sizeof(arr)/sizeof(int);
    int target=20;
    int ansIndex=-1;
    findFirstOccur(arr,size,target,ansIndex);
    cout<<"First occurance index: "<<ansIndex<<endl;
    return 0;
}