#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;

int main(){

    string s = "shakirsha";
    unordered_map<char,int>hmap={};


    //precomputation
    for(int i = 0;i<9;i++){
        hmap[s[i]]++;
    }
    //fetching
     LOG(hmap['a']);
}
    