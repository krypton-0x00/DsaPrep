#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;
void selectionSort(int arr[],int n){
     for(int i = 0 ; i<=n-2; i++){
        int minValue = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j]<arr[minValue]){
                minValue = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minValue];
        arr[minValue] = temp;
    }
}
int main(){
    int nums[] = {12,1,43,45,23,11,54,4};
    int length = sizeof(nums)/sizeof(int);
    selectionSort(nums,length);  
    for(int i = 0 ; i < length ;i++){
        LOG(nums[i])
    }
    
}