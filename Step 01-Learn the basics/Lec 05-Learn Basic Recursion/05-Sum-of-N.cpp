#include<bits/stdc++.h> // Includes all standard header files in C++ (not recommended for large projects for efficiency reasons)
using namespace std;    // Allows usage of standard library functions without prefixing them with `std::`

// Function to calculate the sum of the first `n` natural numbers using the **parameterized recursion** approach
void sumfnc(int n, int sum) {
    if(n < 1) { // Base case: If `n` becomes less than 1
        cout << "Sum using parameterized way: " << sum << endl; // Print the final sum
        return; // Exit the recursion
    }

    // Recursive call: Decrease `n` by 1 and add the current value of `n` to `sum`
    sumfnc(n - 1, sum + n);
}

// Function to calculate the sum of the first `n` natural numbers using the **functional recursion** approach
int summetion(int n) {
    if(n == 0) { // Base case: If `n` is 0, return 0
        return 0;
    }

    // Recursive call: Add the current value of `n` to the sum of numbers from `1` to `n-1`
    return n + summetion(n - 1);
}

int main() {
    int n, sum = 0; // Declare variables `n` (input number) and `sum` (initial sum set to 0)

    cout << "Enter the value of n : "; // Prompt user to enter a value for `n`
    cin >> n; // Read input value for `n`

    // Call the parameterized recursive function to calculate the sum
    sumfnc(n, sum);

    // Call the functional recursive function to calculate the sum and print the result
    cout << "Sum using functional way: " << summetion(n) << endl;

    return 0; // Indicate that the program executed successfully
}
