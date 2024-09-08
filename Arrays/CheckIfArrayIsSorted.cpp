#include<bits/stdc++.h>
#define LOG(message) cout<<message<<endl;

using namespace std;

bool isSorted(vector<int> arr) {
    
    for(int i = 0; i < arr.size() - 1; i++) {
        // If the current element is greater than the next element, the array is not sorted
        if(arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}


int main(){
    vector<int>arr = {1,2,2,3,3,4,5};
    bool issorted = isSorted(arr);
    LOG(issorted);
}