// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,0,1,1,0};
//     int countZeros=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]==0) countZeros+=1;
//     }
//     for(int i=0;i<5;i++){
//         if(i<countZeros) arr[i]=0;
//         else{
//             arr[i]=1;
//         }
//     }
//     for(int i=0;i<5;i++){
//         cout<< arr[i]<<" ";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
void sort0and1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
			nextZero++;
		}
	}
}
 int main(){
    int arr[5]={1,0,1,1,0};
    sort0and1s(arr,5);
    for(int i=0;i<5;i++){
        cout<< arr[i]<<" ";
        }
         
     return 0;
} 