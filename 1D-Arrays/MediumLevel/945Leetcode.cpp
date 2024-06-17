// Minimum increment to make array unique
#include <iostream>
#include <unordered_map>
using namespace std;
//brute force (using map) T.C= O(N^2) S.C=O(N)
int minIncrementForUnique(int arr[], int n)
{
    int count = 0;
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        if (freq.find(arr[i]) != freq.end())
        {
            freq[arr[i]]++;
        }
        else
        {
            freq[arr[i]] = 1;
        }
    }
    int i = 0;
    while (i < n)
    {
        while (freq[arr[i]] != 1)
        {
            freq[arr[i]]--;
            arr[i] += 1;
            freq[arr[i]] += 1;
            count += 1;
        }
        i++;
    }
    return count;
}
int main(){
    int arr[]={3,2,1,2,1,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<minIncrementForUnique(arr,n)<<endl;

    return 0;
}