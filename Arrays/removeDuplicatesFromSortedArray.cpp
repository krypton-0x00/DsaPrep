#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;
//TC: o(NLOGN + N)
int removeDuplicate(vector<int>arr){
    set<int>st;
    int index = 0;
    for(auto it:arr){
        st.insert(it); //NLOGN
    }
    for(auto it:st){ //N
        arr[index] = it; 
        index++;
    }
    
    return index;

}


int main(){
   vector<int>arr = {1,2,2,3,4,4};
    int duplicateElms = removeDuplicate(arr);
    LOG( duplicateElms);
    // for(auto it : arr){
    //     LOG(it);
    // }
}