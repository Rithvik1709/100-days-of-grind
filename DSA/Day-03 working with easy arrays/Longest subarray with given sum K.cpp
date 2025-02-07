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
