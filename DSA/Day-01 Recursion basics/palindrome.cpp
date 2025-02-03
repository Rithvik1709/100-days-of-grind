#include <iostream>
#include <string>
using namespace std;

// Recursive function to check if a string is a palindrome
bool isPalindrome(const string &str, int start, int end) {
    // Base case: If start index is greater or equal to end index, it's a palindrome
    if (start >= end) {
        return true;
    }
    // Check if the characters at start and end match
    if (str[start] != str[end]) {
        return false;
    }
    // Recursive call to check the remaining substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Check if the string is a palindrome
    if (isPalindrome(input, 0, input.length() - 1)) {
        cout << input << " is a palindrome!" << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}
