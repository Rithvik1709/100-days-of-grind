#include <iostream>
using namespace std;

// Recursive function to reverse an array
void reverseArray(int arr[], int start, int end) {
    // Base case: If start index is greater or equal to end, stop recursion
    if (start >= end) {
        return;
    }
    
    // Swap the elements at start and end
    swap(arr[start], arr[end]);
    
    // Recursive call for the next pair of elements
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    
    // Input the array elements
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the reverseArray function
    reverseArray(arr, 0, n - 1);
    
    // Output the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
