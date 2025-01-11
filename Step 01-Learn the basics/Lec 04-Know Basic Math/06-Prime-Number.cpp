#include <bits/stdc++.h> // Includes all standard library headers (used for convenience)
using namespace std;

// Method 1: Efficient function to check if a number is prime
bool prime(int n) {
    // Step 1: Handle cases where the number is less than or equal to 0
    if (n <= 0) {
        return false; // Non-positive numbers are not prime
    }

    // Step 2: Check divisors from 2 to n/2
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) { // If n is divisible by i (remainder is 0)
            return false; // n is not a prime number
        }
    }

    // Step 3: If no divisors are found, n is a prime number
    return true;
}

// Method 2: Alternate function to check if a number is prime (using a counter)
bool checkPrime(int n) { 
    int cnt = 0; // Counter to count the number of divisors

    // Step 1: Loop through all numbers from 1 to n
    for (int i = 1; i <= n; i++) { 
        // If n is divisible by i
        if (n % i == 0) { 
            cnt++; // Increment the divisor count
        }
    }

    // Step 2: A prime number has exactly 2 divisors (1 and itself)
    if (cnt == 2) {
        return true; // n is prime
    } else {
        return false; // n is not prime
    }
}

int main() {
    int n; // Variable to store the user's input

    // Prompt the user to enter a number
    cout << "Enter the value of n: ";
    cin >> n; // Read the input

    // Step 3: Check if the number is prime using the first method
    if (prime(n)) { 
        cout << n << " is a prime number!" << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0; // Indicates successful execution
}
