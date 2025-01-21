#include<bits/stdc++.h>
using namespace std;

// Recursive function to check if a string is a palindrome
bool stringPlaindrome(int n, string &s) {
    // Base case: If we have checked all pairs or reached the middle
    if (n >= s.size() / 2) {
        return true; // The string is a palindrome
    }

    // Check if characters at the current positions are not equal
    if (s[n] != s[s.size() - n - 1]) {
        return false; // The string is not a palindrome
    }

    // Recursively check the next pair of characters
    return stringPlaindrome(n + 1, s);
}

int main() { 
    string s;
    
    // Prompt the user to enter a string
    cout << "Enter the string: ";
    cin >> s;

    // Check if the string is a palindrome and print the result
    if (stringPlaindrome(0, s)) {
        cout << "Palindrome String!"; // Print if the string is a palindrome
    } else {
        cout << "Not a Palindrome String!"; // Print if the string is not a palindrome
    }

    return 0; // Exit the program
}
