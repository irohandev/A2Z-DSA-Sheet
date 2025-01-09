#include<bits/stdc++.h>
using namespace std;

// Function to print the alphabetic triangle pattern
void print(int n) {
    // Loop through each row
    for (int i = 0; i < n; i++) {
        // Print characters for the current row
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";  // Print the current character with a space
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
A B
A B C
A B C D
A B C D E

Explanation:
- The pattern consists of rows of increasing alphabets starting from 'A'.
- The number of characters in each row equals the row number (1st row has 1 character, 2nd
*/
