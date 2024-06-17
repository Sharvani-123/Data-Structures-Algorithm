#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    int maxLen = 0;
    int start=0;
    int end=0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum <= k) {
                if (j - i + 1 > maxLen) {
                    maxLen = j - i + 1;
                start=i;
                end=j;
                }
            } else {
                break; // Exit the loop if sum exceeds k
            }
        }
    }

    cout << maxLen << endl;
    for(int t=start;t<=end;t++){
        cout<<arr[t]<<" ";
    }
    return 0;
}
