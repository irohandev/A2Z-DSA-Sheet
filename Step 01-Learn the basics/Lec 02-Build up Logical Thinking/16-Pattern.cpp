#include<bits/stdc++.h>
using namespace std;

// Function to print the alphabetic right-angled triangle pattern
void print(int n) {
    // Loop through each row
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;  // Determine the character for the current row

        // Loop to print the character in the current row
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";  // Print the character with a space
        }

        cout << endl;  // Move to the next row after printing the current row
    }
}

int main() {
    int n;
    // Input: Asking the user to enter the size of the pattern
    cout << "Enter the size of the pattern: ";
    cin >> n;  // User inputs the number of rows for the pattern

    // Function call to print the pattern based on the input size
    print(n);

    return 0;  // End of the program
}

/*
Sample Input:
5

Sample Output:
A
B B
C C C
D D D D
E E E E E

Explanation:
- The pattern forms a right-angled triangle with alphabets.
- The character in each row is determined by the row number:
  - Row 1: 'A', Row 2: 'B', and so on.
- The number of characters in each row equals the row number.
*/
