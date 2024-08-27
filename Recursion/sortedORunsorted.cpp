#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;
 
bool isSorted(int nums[] ,int size, int cnt = 0){
    if(cnt >= size-1)return true;
    if(nums[cnt] > nums[cnt+1]){
        return false;
    }
    return isSorted(nums,size,cnt+1);
    

}

int main(){
    int sorted[] ={1,2,3,4,5};
    int unsorted[] ={1,5,3,4,2};

   LOG(isSorted(sorted,5));
   LOG(isSorted(unsorted,5));

}