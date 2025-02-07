/*
 * Problem: Find the Missing Number in an Array
 * 
 * Given an array containing N-1 distinct numbers taken from the range 1 to N, 
 * find the missing number in the array.
 * 
 * Approach:
 * - We use the XOR operation to find the missing number.
 * - XOR all the numbers from 1 to N.
 * - XOR all the elements in the given array.
 * - The missing number will be the result of XORing the above two results.
 */

#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& a, int N) {
    int xor1 = 0, xor2 = 0;

    // XOR all numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        xor1 ^= i;
    }

    // XOR all elements in the array
    for (int num : a) {
        xor2 ^= num;
    }

    // The missing number is the difference of both XORs
    return xor1 ^ xor2;
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5}; 
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
