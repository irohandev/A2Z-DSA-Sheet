#include<bits/stdc++.h> // Includes all standard library headers.
using namespace std;

// Function to check if a number is a palindrome.
int palin(int n) {
    int original_num = n; // Preserve the original value of the number for comparison.
    int rev = 0;         // Initialize the reversed number to 0.

    // Loop to reverse the digits of the number.
    while (n > 0) {
        int last = n % 10;     // Extract the last digit of the number.
        n = n / 10;           // Remove the last digit from the number.
        rev = (rev * 10) + last; // Append the last digit to the reversed number.
    }

    // Compare the reversed number with the original number.
    if (original_num == rev) {
        cout << "Palindrome Number!" << endl; // Output if the number is a palindrome.
    } else {
        cout << "Not a Palindrome Number!";   // Output if the number is not a palindrome.
    }

    // Note: The function does not return a value, though it has an int return type.
    // A better practice would be to return a boolean indicating whether it's a palindrome.
}

int main() {
    int n; // Variable to store the user-input number.

    // Prompt the user to enter a number.
    cout << "Enter the value of n: ";
    cin >> n; // Read the number from the user.

    // Call the palin function to check if the number is a palindrome.
    palin(n);

    return 0; // Indicate successful program execution.
}
