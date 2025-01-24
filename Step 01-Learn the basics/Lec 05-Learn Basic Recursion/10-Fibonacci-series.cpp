// Fibonacci Series using Recursion
// This program calculates the Fibonacci series using a recursive function.
#include<bits/stdc++.h>
using namespace std;

// Function to calculate Fibonacci numbers recursively
int fibonacci(int n) {
    // Base case: If n is 0 or 1, return n directly
    if (n <= 1) {
        return n;
    }

    // Recursive calls: Calculate Fibonacci(n-1) and Fibonacci(n-2)
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n = 5; // Number of terms to calculate in the Fibonacci series

    cout << "Fibonacci series up to " << n << " terms:" << endl;

    // Loop through numbers from 0 to n-1 and print the Fibonacci series
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " "; // Call the recursive function for each term
    }

    cout << endl; // Print a new line after the series
    return 0; // Indicate successful execution
}
