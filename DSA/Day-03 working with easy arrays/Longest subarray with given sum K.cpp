/*
 * Problem: Longest Subarray with Given Sum K
 * 
 * Given an array of integers and a target sum K, the task is to find the length of the longest subarray that sums to K.
 * 
 * Approach:
 * - Use a prefix sum and a hash map to store the first occurrence of each prefix sum.
 * - Traverse the array and keep updating the prefix sum.
 * - If the prefix sum equals K, update the maximum length.
 * - If (prefix sum - K) exists in the hash map, it means there is a subarray that sums to K.
 * - Update the maximum length if the current subarray is longer.
 * - Store the prefix sum in the hash map if it is not already present.
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    unordered_map<long long, int> prefixSumMap;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < a.size(); i++) {
        sum += a[i];  

        // If sum itself is equal to k, update maxLen
        if (sum == k) {
            maxLen = i + 1;
        }

        // If (sum - k) exists in the map, it means there's a subarray that sums to k
        if (prefixSumMap.find(sum - k) != prefixSumMap.end()) {
            maxLen = max(maxLen, i - prefixSumMap[sum - k]);
        }
        if (prefixSumMap.find(sum) == prefixSumMap.end()) {
            prefixSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
