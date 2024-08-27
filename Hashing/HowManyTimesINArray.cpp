#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;

int main(){

    int arr[]={1,2,3,4,4,3,3,3,3,3,4,5,5};
    int target = 6;
    int hash[13] = {0};

    //precomputation
    for(int i = 0;i<13;i++){
        hash[arr[i]]++;
    }
    //fetching
    LOG(hash[target]);

}