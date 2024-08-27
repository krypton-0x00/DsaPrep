#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;

//if we have both captial and small letters we can have an array of 256 chars
//then we can retrive the values using hash['c'] because every char will get assigned to its ascii value
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