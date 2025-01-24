#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive call: n * factorial of (n - 1)
    return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Calculate and display the factorial
    cout << "Factorial of " << number << " is " << factorial(number) << endl;

    return 0;
}
