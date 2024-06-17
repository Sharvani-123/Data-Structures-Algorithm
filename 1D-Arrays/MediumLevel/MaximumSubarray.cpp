//Brute Force (O(N^2))
#include <iostream>
#include <climits>
using namespace std;
int maxSubArray(int arr[],int n){
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum>max_sum){
            max_sum=sum;
            }
        }
        
    }
    return max_sum;
}
int main(){
    int arr[]= {1,-2,4,-4,9,-5};
    int size=sizeof(arr)/sizeof(int);
    int ans=maxSubArray(arr,size);
    cout<<ans<<endl;
    return 0;
}