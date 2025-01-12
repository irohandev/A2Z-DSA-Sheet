#include<bits/stdc++.h> // Include all standard libraries in C++
using namespace std;    // Use the standard namespace

// Recursive function to print numbers from 1 to n
void print_n_numbers(int i, int n) {
    // Base case: Stop recursion when i exceeds n
    if (i > n) {
        return;  // Exit the function
    } 

    // Print the current value of i
    cout << i << endl;

    // Recursive call: Increment the value of i and call print_n_numbers again
    return print_n_numbers(i + 1, n);  
}

int main() {
    int n, i = 1;  // Initialize n (upper limit for numbers) and i (starting at 1)
    cout << "Enter the value of n: ";  // Prompt user for input
    cin >> n;  // Take input for the upper limit of numbers to print

    // Start the recursion by calling the function with i = 1 and the user-specified n
    print_n_numbers(i, n);   

    // Exit the program
    return 0;
}
