#include <iostream>
#include <vector>
using namespace std;

int longestSubarraySumAtMostK(vector<int>& nums, int k) {
    int left = 0, sum = 0, maxLen = 0;

    for (int right = 0; right < nums.size(); right++) {
        sum += nums[right];

        while (sum > k) {
            sum -= nums[left];
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    vector<int> nums = {3, 1, 2, 1, 1, 1, 5};
    int k = 5;
    cout << "Longest subarray with sum <= " << k << " is: " << longestSubarraySumAtMostK(nums, k) << endl;
    return 0;
}
