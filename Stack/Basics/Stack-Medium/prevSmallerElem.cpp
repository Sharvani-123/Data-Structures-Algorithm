#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
void solve(stack<int>&s, vector<int>&arr, vector<int>&ans){
    for(int i=0;i<arr.size();i++){
        while(arr[i]<s.top()){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(arr[i]);
    }

}
int main(){
    stack<int>s;
    s.push(-1);
    vector<int>arr = {8,4,2,6,3};
    vector<int>ans;
    solve(s,arr,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}