#include<bits/stdc++.h> // Includes all standard library headers
using namespace std;

// Function to print all factors of a given number
int print_factors(int n) {
    // Loop through all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { // Check if 'i' divides 'n' without a remainder
            cout << "Factors are: " << i << endl; // Print the factor
        }
    }
    // Note: This function does not return a value, though it's defined with 'int' return type.
    // Using 'void' instead of 'int' would be more appropriate.
}

int main() {
    int n; // Variable to store the user-input number

    // Prompt the user to enter a number
    cout << "Enter the value of n: ";
    cin >> n; // Read the input number

    // Call the function to print all factors of the number
    print_factors(n);

    return 0; // Indicate successful program execution
}
