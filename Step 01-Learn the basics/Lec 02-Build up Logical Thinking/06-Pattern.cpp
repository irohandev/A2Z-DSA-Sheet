#include<bits/stdc++.h>
using namespace std;

// Function to print a pattern of numbers in a decreasing manner
void print(int n) {
    // Loop for rows (starting from 1 to n)
    for (int i = 1; i <= n; i++) {
        // Loop for columns (print numbers from 1 to n-i+1 in each row)
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";  // Print the number followed by a space
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    int n;
    // Input: Asking the user to enter the size of the pattern
    cout << "Enter the size of the pattern: ";
    cin >> n;  // User inputs the size of the pattern (number of rows)
    
    // Function call to print the pattern based on the input size
    print(n);
    
    return 0;  // End of the program
}

/*
Example Input:
Enter the size of the pattern: 5

Example Output:
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1
*/
