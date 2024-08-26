#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;

// 0,1,2,3,4,5
// 

int fib(int n){
    if(n == 0|| n ==1) return n;
    return fib(n-1) + fib(n-2);
    // LOG(res);
}

int main(){
    int res =  fib(5);
    LOG(res);
}