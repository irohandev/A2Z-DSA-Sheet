#include<bits/stdc++.h>
using namespace std;

// Function to print the inverted alphabetic triangle pattern
void print(int n) {
    // Loop through each row
    for (int i = 0; i < n; i++) {
        // Print characters for the current row
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
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
A B C D E
A B C D
A B C
A B
A

Explanation:
- The pattern is an inverted triangle of alphabets starting from 'A'.
- The first row has `n` alphabets, and the number of characters decreases by 1 in each subsequent row.
- Each row starts from 'A' and ends with the appropriate character based on the row number.
*/
