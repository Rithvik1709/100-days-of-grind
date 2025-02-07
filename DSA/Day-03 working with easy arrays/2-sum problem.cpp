// This program solves the Two Sum problem.
// Given an array of integers `nums` and an integer `target`,
// return indices of the two numbers such that they add up to `target`.
// You may assume that each input would have exactly one solution,
// and you may not use the same element twice.
// Example:
// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; 

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; 

        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; 
        }

        numMap[nums[i]] = i; 
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
