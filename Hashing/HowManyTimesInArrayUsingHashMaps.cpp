#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;

int main(){

    int arr[]={1,2,3,4,4,3,3,3,3,3,4,5,5};
    int target = 6;
    unordered_map<int,int>hmap={};


    //precomputation
    for(int i = 0;i<13;i++){
        hmap[arr[i]]++;
    }
    //fetching
     LOG(hmap[3]);
}
    