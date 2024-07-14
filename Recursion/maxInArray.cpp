#include <iostream>
#include <math.h>
#include<limits.h>
using namespace std;
int maxInArray(int arr[], int size,int index,int &maxi){
    //base case: return when out of the array
    if(index==size) return maxi ;
    maxi= max(maxi,arr[index]);
    return maxInArray(arr,size,index+1,maxi);
}
int main(){
    int arr[]= {10,20,30,40,50,60};
    int size= sizeof(arr)/sizeof(arr[0]);
    int index=0;
    int maxi= INT_MIN;
    cout<< maxInArray(arr,size,index,maxi)<<endl;
    return 0;
}