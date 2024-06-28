#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[],int s,int m,int e){
    vector<int>temp;
    int i=s;
    int j=m+1;
    while(i<=m && j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=m){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=s;i<=e;i++){
        arr[i]=temp[i-s];
    }

}
void mergeSort(int arr[],int s, int e){
    if(s>=e) return ;
    int m=s+(e-s)/2;
    //for left division
    mergeSort(arr,s,m);
    //for right division
    mergeSort(arr,m+1,e);
    //merge the two sorted arrays
    merge(arr,s,m,e);

}
int main(){
    int arr[]= {40,50,20,10,30,60,90,80,70,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    return 0;
}