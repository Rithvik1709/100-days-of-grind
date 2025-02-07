#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> firstNegativeInWindow(vector<int>& nums, int k);

using namespace std;

vector<int> firstNegativeInWindow(vector<int>& nums, int k) {
    vector<int> result;
    deque<int> dq; 

    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] < 0) dq.push_back(right);

        if (right >= k - 1) {
            if (!dq.empty() && dq.front() < right - k + 1) dq.pop_front();
            result.push_back(dq.empty() ? 0 : nums[dq.front()]);
        }
    }
    return result;
}

int main() {
    vector<int> nums = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    vector<int> result = firstNegativeInWindow(nums, k);
    
    cout << "First negative in every window: ";
    for (int num : result) cout << num << " ";
    return 0;
}
