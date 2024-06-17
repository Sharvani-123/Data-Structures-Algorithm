// Optimal Approach
#include <iostream>
using namespace std;
int uniqueElement(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={2,6,6,3,2};
    int size=5;
    int uniqueElem= uniqueElement(arr,size);
    cout<<uniqueElem;
    return 0;
}
