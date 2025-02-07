/*
This program removes duplicate elements from a sorted array.
It uses the two-pointer technique to achieve this in O(n) time complexity.
The function `removeDuplicates` modifies the input array in place and returns the new length of the array after duplicates have been removed.
The main function demonstrates the usage of `removeDuplicates` by removing duplicates from a sample array and printing the result.
*/

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& arr) {
    int i = 0;
    for (int j = 1; j < arr.size(); j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3};
    
    int k = removeDuplicates(arr);
    
    cout << "The array after removing duplicate elements is:" << endl;
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
