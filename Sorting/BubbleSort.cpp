#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;
void bubbleSort(int arr[],int n){
    for(int  i = n-1 ; i >=0; i-- ){
        bool didSwap = false;
        for(int j = 0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = true;
 
            }
        }
        if(!didSwap) break; //if array is already sorted
    }
     
}
int main(){
    int nums[] = {12,1,43,45,23,11,54,4};
    int length = sizeof(nums)/sizeof(int);
    bubbleSort(nums,length);  
    for(int i = 0 ; i < length ;i++){
        LOG(nums[i])
    }
    
}