#include <iostream>
#include <math.h>
#include<limits.h>
using namespace std;
int minInArray(int arr[], int size,int index,int &mini){
    //base case: return when out of the array
    if(index==size) return mini ;
    mini= min(mini,arr[index]); // we are passing mini by reference so that copy is not created after every recursive call and the original value is not lost
    return minInArray(arr,size,index+1,mini);
}
int main(){
    int arr[]= {10,20,30,40,50,60};
    int size= sizeof(arr)/sizeof(arr[0]);
    int index=0;
    int mini= INT_MAX;
    cout<< minInArray(arr,size,index,mini)<<endl;
    return 0;
}