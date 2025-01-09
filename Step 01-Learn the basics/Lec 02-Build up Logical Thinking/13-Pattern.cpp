#include<bits/stdc++.h>
using namespace std;

// Function to print the Floyd's triangle pattern
void print(int n) {
    int num = 1;  // Initialize the starting number

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Loop to print numbers in the current row
        for (int j = 1; j <= i; j++) {
            cout << num << " ";  // Print the current number
            num += 1;            // Increment the number
        }

        cout << endl;  // Move to the next line after finishing the row
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
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Explanation:
- The pattern is a triangular arrangement of numbers, known as Floyd's triangle.
- The numbers increment sequentially from 1, row by row.
- Each row contains numbers equal to the row number (e.g., 1 number in row 1, 2 numbers in row 2, and so on).
*/
