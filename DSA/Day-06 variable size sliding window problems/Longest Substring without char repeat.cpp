#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndex;
    int maxLen = 0, left = 0;

    for (int right = 0; right < s.length(); right++) {
        if (charIndex.find(s[right]) != charIndex.end())
            left = max(left, charIndex[s[right]] + 1);
        
        charIndex[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << "Longest substring length: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
