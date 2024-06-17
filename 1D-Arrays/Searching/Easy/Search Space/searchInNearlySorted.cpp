
// Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped with either arr[i+1] or arr[i-1]. The task is to search for an element in this array.

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
// Output: 2
// Explanation: Output is index of 40 in given array i.e. 2

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
// Output: -1
// Explanation: -1 is returned to indicate the element is not present

#include <iostream>
using namespace std;
int applyBS(int arr[], int n,int target){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(mid-1>=s && arr[mid-1]==target){
            return mid-1;
        }
        else if(mid+1<=e && arr[mid+1]==target){
            return mid+1;
        }
        else if(arr[mid]<target){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
    }
    return -1;
}


int main(){
    int arr[] = {10, 3, 40, 20, 50,80,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 10;
    int ans= applyBS(arr,n,key);
    if(ans!=-1){
        cout<<"Element found at index "<<ans<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
        }
    return 0;
}