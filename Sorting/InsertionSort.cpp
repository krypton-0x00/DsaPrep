#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;

void insertionSort(int arr[],int n){
    for(int i = 0; i<=n-1;i++){
        int j = i;
        while (j > 0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];   
            arr[j] = temp;
            j--;
            
        }     
    }
   
}

int main(){
    int arr[] = {1,12,13,2,32,31,44};

    insertionSort(arr,7);
    for(int i = 0; i < 7 ;i++){
        LOG(arr[i]);
    }
   
}