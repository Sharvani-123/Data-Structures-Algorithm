//optimized
#include <iostream>

#include <climits>
using namespace std;

//sliding-window approach
float maxAvg(int arr[], int n,int &k){
    int sum = 0;
    int maxi=INT_MIN;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxi=max(maxi,sum);
    int j=k;
    int i=0;
    while(j<n){
        sum=sum-arr[i++]+arr[j++];
        maxi=max(maxi,sum);
    }

        
    float ans= float(maxi)/k;
    return ans;

}
int main(){
    int arr[]={1,12,-5,-6,50,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    cout<<maxAvg(arr,n,k)<<endl;
    return 0;
}