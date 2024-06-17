#include <iostream>
using namespace std;

void sortColors(int arr[],int n){
   int l=0,m=0,h=n-1;
   while(m<=h){
    if(arr[m]==0){
        swap(arr[l],arr[m]);
        l++;
        m++;
   }
   else if(arr[m]==1){
    m++;
   
   }
   else{
    swap(arr[m],arr[h]);
    h--;
   }
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}
int main(){
    int arr[9]={1,1,0,2,0,1,2,0,1};
    int size=9;
    sortColors(arr,size);
    return 0;
}