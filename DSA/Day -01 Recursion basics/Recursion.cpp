#include <iostream>
using namespace std;

// Recursive function to print even numbers
void printEvenNumbers(int n) {
    // Base case: Stop recursion when n is less than 2
    if (n < 2) {
        return;
    }
    // Recursive call for the previous even number
    printEvenNumbers(n - 2);
    // Print the current even number if it's even
    if (n % 2 == 0) {
        cout << n << " ";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Even numbers from 2 to " << n << ": ";
    printEvenNumbers(n);
    cout << endl;

    return 0;
}
