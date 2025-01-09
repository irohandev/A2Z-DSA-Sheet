#include<bits/stdc++.h>
using namespace std;

// Function to print a square pattern of asterisks of size n x n
void print(int n) {
    // Loop through each row of the square pattern
    for (int i = 0; i < n; i++) {
        // Loop through each column of the square pattern
        for (int j = 0; j < n; j++) {
            // Check if it's a border (first row, first column, last row, or last column)
            if( i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                // Print an asterisk at the border positions
                cout << "*";
            }
            else {
                // Print a space for positions inside the border
                cout << " ";
            }
        }
        // Move to the next line after printing all columns in the current row
        cout << endl;
    }
}

int main() {
    // Variable to store the size of the square pattern
    int n;

    // Prompt user for the size of the square
    cout << "Enter the size of the square pattern: ";
    cin >> n;

    // Call the function to print the square pattern with the given size
    print(n);

    // Return 0 to indicate successful execution
    return 0;
}

/*
Sample Input:
Enter the size of the square pattern: 5

Sample Output:
*****
*   *
*   *
*   *
*****

*/

