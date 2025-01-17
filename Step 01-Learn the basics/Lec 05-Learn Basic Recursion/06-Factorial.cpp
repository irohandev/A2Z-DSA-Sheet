#include<bits/stdc++.h> // Includes all standard header files in C++ (not recommended for large projects for efficiency reasons)
using namespace std;    // Allows usage of standard library functions without prefixing them with `std::`

// Function to calculate the factorial of a number using recursion
int fact(int n) {
    if(n == 0) { // Base case: If `n` is 0, the factorial is defined as 1
        return 1; 
    }

    // Recursive call: Multiply the current value of `n` with the factorial of `n-1`
    return n * fact(n - 1);
}

int main() {
    int n; // Declare variable `n` to hold the user input

    cout << " Enter the value of n : "; // Prompt user to input a value for `n`
    cin >> n; // Read input value for `n`

    // Call the recursive function `fact` and display the result
    cout << "Factorial of n : " << fact(n) << endl;

    return 0; // Indicate that the program executed successfully
}
