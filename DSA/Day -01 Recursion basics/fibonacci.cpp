/*
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2) for n >= 2
*/

#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base case: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
    if (n <= 1) {
        return n;
    }
    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;
    cout << "Enter the position in Fibonacci sequence: ";
    cin >> number;

    cout << "Fibonacci number at position " << number << " is " << fibonacci(number) << endl;

    return 0;
}

