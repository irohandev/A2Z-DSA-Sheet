#include<bits/stdc++.h>
using namespace std;

// Function to print the symmetric number-space-number pattern
void print(int n) {
    int space = 2 * (n - 1);  // Initialize the space count between the two number sequences

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;  // Print numbers from 1 to the current row number
        }

        // Print spaces in the middle
        for (int j = 1; j <= space; j++) {
            cout << " ";  // Print spaces to create the gap
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;  // Print numbers from the current row number back to 1
        }

        cout << endl;  // Move to the next row
        space -= 2;    // Reduce the space count for the next row
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
Sample Input:
5

Sample Output:
1        1
12      21
123    321
1234  4321
1234554321
*/

// Explanation of the Pattern:
// - The pattern consists of two mirrored number sequences separated by spaces.
// - The number of rows is determined by the input `n`.
// - In each row:
//   - First part: Numbers increment from 1 to the row number.
//   - Middle part: Spaces decrease by 2 with each row.
//   - Last part: Nu
