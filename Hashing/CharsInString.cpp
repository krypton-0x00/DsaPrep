#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;

int main(){

    string name = "sdfjsshakirgulzar";


    //precomputation
    int hash[26] = {0};
    for(int i = 0;i<name.size();i++){
        hash[name[i]-'a']++;
    }

    //fetching
    int target = 'g';
    LOG(hash[target - 'a']);

}