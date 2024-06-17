#include <iostream>
#include <algorithm>
using namespace std;
//brute force
// void twoSum(int arr[],int n,int target){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
//     }
// }
//optimized(two pointer approach)
bool twoSumOptimized(int arr[],int n,int target){
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            return true;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}

int main(){
    int arr[5]={10,20,15,25,30};
    int size=5;
    int target=35;
    // twoSum(arr,size,target);
    if(twoSumOptimized(arr,size,target)){
        cout<<"Pair Found"<<endl;
    }
    else{
        cout<<"Not found";
    }
    return 0;
}