#include <vector>
#include <limits.h>  // For INT_MIN
#include<iostream>

int secondLargestDistinct(const std::vector<int> &arr) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        // Ignore duplicates of the largest element
        if (arr[i] == largest) {
            continue;
        }

        // Update largest and second largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    // If secondLargest hasn't changed, return -1
    return secondLargest == INT_MIN ? -1 : secondLargest;
}

int main(){
    int x = secondLargestDistinct({1,2,3,4,4,5,6,4,4});
    std::cout<<x<<std::endl;
}