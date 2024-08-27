#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;

int findExponent(int n, int power ){
    if( power == 0) return 1;

    return n * findExponent(n, power -1);

}

int main(){
   int res = findExponent(2,4);
   LOG(res);
}