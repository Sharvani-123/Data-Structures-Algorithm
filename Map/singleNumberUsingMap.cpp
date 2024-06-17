#include <iostream>
#include <unordered_map>
using namespace std;
int singleNumber(int arr[],int n){
    unordered_map<int,int>freqMap;
    for(int i=0;i<n;i++){
        int num=arr[i];
        freqMap[num]+=1;
    }
    unordered_map<int, int>::iterator it;
    for(it=freqMap.begin();it!=freqMap.end();it++){
        if(it->second==1){
            return it->first;
        }
    }
    return -1;
}
int main(){
    int arr[7]={3,2,2,0,1,0,1};
    int size=7;
    int ans= singleNumber(arr,size);
    cout<<ans<<endl;
    return 0;
} 