#include <iostream>
using namespace std;
//Brute Force(O(N^2)) only 1 duplicate
int findDuplicates(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
    }
   }
}
int main(){
    int arr[5]={1,3,4,2,2};
    int size=5;
    cout<< findDuplicates(arr,size);
    
    return 0;
}