#include<bits/stdc++.h>

#define LOG(message) cout<<message<<endl;

using namespace std;

void countingNumbers(int n){
    if(n<=0) return ;
    countingNumbers(n-1);
    LOG(n);
    
}


int main(){

    countingNumbers(5);


}