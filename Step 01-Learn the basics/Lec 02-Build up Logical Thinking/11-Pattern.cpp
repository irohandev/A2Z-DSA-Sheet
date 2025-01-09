#include<bits/stdc++.h>
using namespace std;

// Function to print the binary triangle pattern
void print(int n) {
    int start = 1;  // Variable to track the starting value for each row (0 or 1)

    // Loop through each row of the pattern
    for (int i = 0; i <= n; i++) {
        // Decide the starting value for the current row
        if (i % 2 == 0) {
            start = 1;  // Even rows start with 1
        } else {
            start = 0;  // Odd rows start with 0
        }

        // Print values for the current row
        for (int j = 0; j <= i; j++) {
            cout << start;        // Print the current value
            start = 1 - start;    // Toggle between 0 and 1
        }
        cout << endl;  // Move to the next line after finishing the current row
    }
}

int main() {
    int n;
    // Input: Asking the user to enter the size of the pattern
    cout << "Enter the size of the pattern: ";
    cin >> n;  // User inputs the size of the pattern (height of the triangle)

    // Function call to print the pattern based on the input size
    print(n);

    return 0;  // End of the program
}

/*
Sample Input:
5

Sample Output:
1
01
101
0101
10101
010101
*/

// The binary triangle pattern is printed row by row. 
// Each row alternates between starting with 1 or 0 depending on the row number.
