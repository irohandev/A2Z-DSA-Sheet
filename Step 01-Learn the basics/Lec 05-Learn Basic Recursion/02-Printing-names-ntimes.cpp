#include<bits/stdc++.h> // Include all standard libraries in C++
using namespace std;    // Use the standard namespace

// Recursive function to print the name "Rohan Dev" n times
void print_names(int i, int n) {
    // Base case: Stop recursion when i reaches or exceeds n
    if (i >= n) {
        return;  // Exit the function
    } 

    // Print the name "Rohan Dev"
    cout << "Rohan Dev" << endl;

    // Recursive call: Increment the value of i and call print_names again
    return print_names(i + 1, n);  
}

int main() {
    int n, i = 0;  // Initialize n (number of times to print) and i (starting count)
    cout << "Enter the value of n: ";  // Prompt user for input
    cin >> n;  // Take input for the number of times to print the name

    // Start the recursion by calling the function with i = 0 and the user-specified n
    print_names(i, n);   

    // Exit the program
    return 0;
}

