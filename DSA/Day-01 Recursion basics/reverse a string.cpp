#include <iostream>
#include <string>
using namespace std;

// Recursive function to reverse a string
string reverseString(const string &s, int index) {
    // Base case: If index is out of values, return an empty string
    if (index == s.size()) {
        return "";
    }
    // Recursive case: reverse the rest of the string and append the current character
    return reverseString(s, index + 1) + s[index];
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Reversed string is: " << reverseString(input, 0) << endl;

    return 0;
}
