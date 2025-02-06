#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    rotate(arr.begin(), arr.begin() + 1, arr.end()); // Rotates left by one

    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
