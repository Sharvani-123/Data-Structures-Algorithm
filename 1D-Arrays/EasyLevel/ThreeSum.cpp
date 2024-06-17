#include <iostream>
using namespace std;
//brute-force
void threeSum(int arr[], int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                }
            }
        }
    }
}
int main(){
    int arr[6]={10,20,30,40,50,60};
    int size=6;
    int target=70;
    threeSum(arr,size,target);
    return 0;
}