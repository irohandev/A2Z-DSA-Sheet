#include<bits/stdc++.h>
using namespace std;

// Function to print a right-angled triangle pattern of asterisks
void print(int n) {
    // Loop for rows
    for (int i = 0; i < n; i++) {
        // Loop for columns (print i+1 stars in the i-th row)
        for (int j = 0; j <= i; j++) {
            cout << "* ";  // Print star with a space
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    int n;
    // Input: Asking the user to enter the size of the pattern
    cout << "Enter the size of the pattern: ";
    cin >> n;  // User inputs the size of the triangle (number of rows)
    
    // Function call to print the pattern based on the input size
    print(n);
    
    return 0;  // End of the program
}


// Example output for n = 5:
// Input: 5
// Output:
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 