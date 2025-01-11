// Brute Force Approach
#include <bits/stdc++.h> 
using namespace std;

int findGcd(int n1, int n2) {
    // Initialize gcd to 1, as 1 is the smallest divisor of any number
    int gcd = 1;

    // Iterate through all numbers from 1 up to the minimum of n1 and n2
    // We only need to check divisors up to the smaller of the two numbers
    for (int i = 1; i <= min(n1, n2); i++) {
        // Check if i is a divisor of both n1 and n2
        if (n1 % i == 0 && n2 % i == 0) {
            // If i is a common divisor, update gcd to i
            gcd = i;
        }
    }

    // Return the greatest common divisor (gcd) found
    return gcd;
}

int main() {
    int n1 = 20, n2 = 15;

    // Call the function to calculate the GCD of n1 and n2 using brute force method
    int gcd = findGcd(n1, n2);

    // Output the result of GCD
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}

// Optimal Approach (Euclidean Algorithm)
#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int a, int b) {
    // Keep looping as long as both a and b are greater than 0
    while (a > 0 && b > 0) {
        // If a is greater than b, update a by finding remainder of a divided by b
        if (a > b) {
            a = a % b;  // Update a to the remainder of a divided by b
        }
        // If b is greater than or equal to a, update b by finding remainder of b divided by a
        else {
            b = b % a;  // Update b to the remainder of b divided by a
        }
    }

    // Once the loop ends, if a becomes 0, return b as the GCD
    if (a == 0) {
        return b;
    }
    // If b becomes 0, return a as the GCD
    return a;
}

int main() {
    int n1 = 20, n2 = 15;

    // Call the function to calculate the GCD of n1 and n2 using Euclidean algorithm
    int gcd = findGcd(n1, n2);

    // Output the result of GCD
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}
