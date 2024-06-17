#include <iostream>
using namespace std;
 void reverse(int nums[],int s,int e){
        for(int i=s,j=e;i<j;i++,j--){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
    void rotate(int nums[],int n, int k) {
        k=k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,n-1-k);
        reverse(nums,n-k,n-1);
    }

int main(){
    int nums[]={1,2,3,4,5,6,7};
    int size=sizeof(nums)/sizeof(int);
    int k=2;
    rotate(nums,size,k);
    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
        }
    return 0;
}