//two sum problem for array elements
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Store number and its index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Find the complement

        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // Return the indices if complement found
        }

        numMap[nums[i]] = i; // Store current number with its index
    }

    return {}; // Should never reach here as per the problem statement
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
