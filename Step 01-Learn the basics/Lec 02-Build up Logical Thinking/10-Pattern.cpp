#include<bits/stdc++.h>
using namespace std;

// Function to print a diamond-like pattern of stars
void print(int n) {
    // Loop for rows (from 1 to 2*n - 1)
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        
        // Adjust the number of stars after reaching the middle row
        if (i > n) {
            stars = 2 * n - i;
        }

        // Loop to print stars in the current row
        for (int j = 1; j <= stars; j++) {
            cout << "*";  // Print a star
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
**
***
****
*****
****
***
**
*
*/
