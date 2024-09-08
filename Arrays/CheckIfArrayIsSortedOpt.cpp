#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;
 
 // we know array is sorted..
 //so {1,2,2,3,4,4} 1 is always at its own place coz array is sorted
 //we will check that next number should not be 1 if we find a num which is not 1 then we will then find the next number which is not equal to that number;
vector<int> myApproach(vector<int>arr){
    vector<int>v;
    int val = -1;
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] == val){
            continue;
        }
        else{
            val = arr[i];
            v.push_back(arr[i]);
        }
    }   
    return v;
    
}

//TC => O(n)
int removeDuplicate(vector<int> arr){
    int i = 0;
    for (int j = 1 ; j < arr.size() ; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }

    }
    //printing
     for(auto it:arr){
        LOG(it);
    }
    return i+1;
}


int main(){
   vector<int>arr = {1,2,2,3,4,4};
   vector<int>v = myApproach(arr);
   for(auto it : v){
        LOG(it);
   }
    // LOG( duplicateElms);
    LOG("-------------------------");
    removeDuplicate(arr);
   

  
}