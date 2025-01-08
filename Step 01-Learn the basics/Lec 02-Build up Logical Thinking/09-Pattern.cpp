#include<bits/stdc++.h>
using namespace std;

void Diamond(int n) {
    // Upper half of the diamond (including the middle row)
    for(int i = 0; i < n; i++) {
        // Print spaces before stars in each row
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";  // Print a space
        }

        // Print stars in the current row (odd number of stars)
        for(int j = 1; j < 2 * (i + 1); j++) {
            cout << "*";  // Print a star
        }

        // Print spaces after stars in each row
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";  // Print a space
        }

        cout << endl;  // Move to the next line after each row
    }

    // Lower half of the diamond
    for(int i = 0; i < n; i++) {
        // Print spaces before stars in each row
        for(int j = 0; j < i; j++) {
            cout << " ";  // Print a space
        }

        // Print stars in the current row (decreasing number of stars)
        for(int j = 0; j < 2 * n - 2 * i - 1; j++) {
            cout << "*";  // Print a star
        }

        // Print spaces after stars in each row
        for(int j = 0; j < i; j++) {
            cout << " ";  // Print a space
        }

        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    int n;
    // Input: Asking the user to enter the size of the pattern
    cout << "Enter the size of the pattern: ";
    cin >> n;  // User inputs the size of the pattern (height of the inverted diamond)
    
    // Function call to print the pattern based on the input size
    Diamond(n);
    
    return 0;  // End of the program
}

/*
Example Input:
5

Example Output:
    *    
   ***   
  *****  
 ******* 
*********
 ******* 
  ***** 
   *** 
    * 
*/
