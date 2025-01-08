#include<bits/stdc++.h>
using namespace std;

// Function to print a diamond-like pattern of stars
void print(int n) {
    // Loop for rows (starting from 0 to n-1)
    for (int i = 0; i < n; i++) {
        // Print spaces before stars
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";  // Print a space
        }

        // Print stars in the current row (odd number of stars)
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";  // Print a star
        }

        // Print spaces after stars
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";  // Print a space
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    int n;
    // Input: Asking the user to enter the size of the pattern
    cout << "Enter the size of the pattern: ";
    cin >> n;  // User inputs the size of the pattern (height of the diamond)
    
    // Function call to print the pattern based on the input size
    print(n);
    
    return 0;  // End of the program
}

/*
Example Input:
Enter the size of the pattern: 5

Example Output:
    *    
   ***   
  *****  
 ******* 
*********
*/
