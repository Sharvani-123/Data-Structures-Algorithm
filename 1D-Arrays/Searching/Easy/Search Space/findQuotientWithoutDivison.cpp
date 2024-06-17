/*
Given two integers one of which is a dividend and the other is divisor.
 Find the quotient without using / or % operators
*/

#include <iostream>
using namespace std;
int getQuotient(int dividend, int divisor){
    // search space ranging b/w [-dividend,+dividend];
    int s= -dividend;
    int e= dividend;
    int ans = -1;
    while(s<=e){
        int mid=s+(e-s)>>1;   //using right shift to divide by 2 
        if(divisor*mid==dividend){
            return mid;
        }
        else if(divisor*mid<dividend){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int dividend, divisor;
    cout << "Enter dividend: "<<endl;
    cin >> dividend;
    cout << "Enter divisor: "<<endl;
    cin >> divisor;
    int ans= getQuotient(abs(dividend),abs(divisor));
    if((dividend<0 && divisor>0 ) || (dividend>0 && divisor<0)){
        ans=0-ans;
    }
     cout<<"Quotient: "<<ans;
    
    
    
    return 0;
}