#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;

int factorial(int n ){
    if (n == 1) return 1 ;
    return n * factorial(n-1);

}

int main(){
   int result = factorial(4);
   LOG(result);
}
