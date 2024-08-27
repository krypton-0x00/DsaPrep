#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;



void spell(int n ,string str[]){
    if(n == 0) return;  
   spell(n/10,str);
   LOG(str[n%10]);

}

int main(){
    string nums[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
   spell(3,nums);
} 