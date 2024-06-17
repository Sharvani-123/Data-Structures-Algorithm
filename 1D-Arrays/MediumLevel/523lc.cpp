#include <iostream>
using namespace std;
bool checkSubarraySum(int nums[], int k,int n) {
        
        
        for(int i=0;i<n-1;i++){
            int sum =nums[i];
            for(int j=i+1;j<n;j++){
                sum+=nums[j];
                if(sum%k==0){
                    return true;
                }
            }
        }
        return false;
    }
int main(){
    int arr[]={23,2,6,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=13;
    if(checkSubarraySum(arr,k,n)){
        cout<<"True";
        }
        else{
            cout<<"False";
        }
    return 0;
}