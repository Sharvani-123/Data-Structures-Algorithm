#include <iostream>
#include <algorithm>
using namespace std;
int missingNum(int arr[],int n){
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==i){
            continue;
        }
        else if(arr[i]!=i){
            ans=i;
            return i;
        }
        else if(ans==-1){
            return n;
        }
    }

}
int main(){
    int arr[5]={4,0,2,3,1};
    int size= sizeof(arr)/sizeof(int);
    sort(arr,arr+size);
    int missNum= missingNum(arr,size);
    cout<<missNum<<endl;


    return 0;
}