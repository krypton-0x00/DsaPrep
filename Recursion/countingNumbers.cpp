#include<bits/stdc++.h>

#define LOG(message) cout<<message<<endl;

using namespace std;

void countingNumbers(int n){
    if(n==0) return ;
    LOG(n);
    countingNumbers(n-1);
    
}


int main(){
    countingNumbers(5);
}