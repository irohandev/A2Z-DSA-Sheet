#include<bits/stdc++.h>
using namespace std;

// Function to print a right-angled triangle pattern of numbers
void print(int n) {
    // Loop for rows
    for (int i = 1; i <= n; i++) {
        // Loop for columns (print numbers from 1 to i in the i-th row)
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // Print the number followed by a space
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

/*
Example Input:
Enter the size of the pattern: 5

Example Output:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
*/
