#include <iostream>
using namespace std;
int peakIndex(int arr[], int n) {
    int s = 0, e = n - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[mid + 1]) {
            // If the element at mid is greater than the next element,
            // the peak must be to the left of mid (including mid itself)
            e = mid;
        } else {
            // If the element at mid is less than or equal to the next element,
            // the peak must be to the right of mid
            s = mid + 1;
        }
    }
    // At the end of the loop, s will be equal to e and pointing to the peak element
    return s;
}

int main(){
    int arr[]={1,5,3,2,1};
    int size=sizeof(arr)/sizeof(int);
    int index= peakIndex(arr,size);
    cout<<"Peak Index: "<<index<<endl;
    return 0;
}