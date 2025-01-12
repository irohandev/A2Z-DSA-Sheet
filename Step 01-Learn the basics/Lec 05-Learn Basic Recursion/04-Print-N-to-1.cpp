#include<bits/stdc++.h> // Include all standard libraries in C++
using namespace std;    // Use the standard namespace

// Recursive function to print numbers from n to 1
void print_n_to_1(int n) {
    // Base case: Stop recursion when n is less than 1
    if (n < 1) {
        return;  // Exit the function
    }

    // Print the current value of n
    cout << n << endl;

    // Recursive call: Decrease n and call print_n_to_1 again
    print_n_to_1(n - 1);  
}

int main() {
    int n;  // Variable to store user input
    cout << "Enter the value of n: ";  // Prompt user for input
    cin >> n;  // Take input for the starting number to print

    // Start the recursion by calling the function with the user-specified n
    print_n_to_1(n);

    // Exit the program
    return 0;
}
