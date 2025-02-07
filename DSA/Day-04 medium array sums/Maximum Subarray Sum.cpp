
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN, currentSum = 0;

    for (int num : nums) {
        currentSum = max(num, currentSum + num);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}
