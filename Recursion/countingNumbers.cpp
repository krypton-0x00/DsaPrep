#include<bits/stdc++.h>

#define LOG(message) cout<<message<<endl;

using namespace std;

int countingNumbers(int n){
    if(n==0) return 0;
    LOG(n);
    return countingNumbers(n-1);
    
}


int main(){

    countingNumbers(5);


}