#include <bits/stdc++.h>
using namespace std;

// Function to print a pyramid pattern with alphabets
void print(int n) {
    // Loop through each row
    for (int i = 0; i < n; i++) {
        // Print leading spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        char ch = 'A';  // Initialize the starting character
        int breakpoint = (2 * i + 1) / 2;  // Middle point of the row

        // Print the characters in the current row
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;  // Print the current character
            if (j <= breakpoint) {
                ch++;  // Increment character up to the middle
            } else {
                ch--;  // Decrement character after the middle
            }
        }

        // Print trailing spaces (optional for formatting)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;  // Move to the next row
    }
}

int main() {
    int n;
    // Input: Asking the user to enter the height of the pyramid
    cout << "Enter number: ";
    cin >> n;  // User inputs the number of rows for the pyramid

    // Function call to print the pyramid
    print(n);

    return 0;  // End of the program
}

/*
Sample Input:
5

Sample Output:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

Explanation:
- The pyramid is made of alphabets, starting from 'A' at the top.
- Each row has:
  - Leading spaces for proper alignment.
  - Increasing alphabets up to the middle.
  - Decreasing alphabets after the middle.
  - The number of characters in a row follows the formula `2 * i + 1` for the `i-th` row.
*/
