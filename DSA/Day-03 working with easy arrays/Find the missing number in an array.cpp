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
