 
#include <bits/stdc++.h>

using namespace std;


 
class Solution {
  public:
   //better not optimal; TC: O(2N)
    int print2largest(vector<int> &arr) {
        //sort
        int largest = 0;
        for(int i = 0; i< arr.size(); i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        //look for second largest elm
        int secondLargest = -1;
        for(int i = 0 ; i < arr.size();i++){
            if(arr[i]>secondLargest && arr[i] != largest){
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
};


int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends