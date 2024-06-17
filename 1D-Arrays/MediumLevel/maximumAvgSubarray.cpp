//brute-force
#include <iostream>

#include <climits>
using namespace std;
float maxAvg(int arr[], int n,int &k){
    int sum = 0;
 
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(j-i+1==k){
                maxi=max(maxi,sum);
                break;
            }
        }
        
    }
    float ans= float(maxi)/k;
    return ans;

}
int main(){
    int arr[]={1,-12,5,-6,50,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    cout<<maxAvg(arr,n,k)<<endl;
    return 0;
}