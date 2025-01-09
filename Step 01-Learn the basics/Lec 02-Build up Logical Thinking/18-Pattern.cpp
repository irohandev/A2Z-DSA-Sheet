#include <bits/stdc++.h>
using namespace std;

// Function to print the reverse-alphabetic triangle pattern
void print(int n) {
    // Outer loop for the number of rows
    for (int i = 0; i < n; i++) {
        // Inner loop to print alphabets from ('A' + n - 1 - i) to ('A' + n - 1)
        for (char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1); ch++) {
            cout << ch << " ";  // Print the current character with a space
        }

        // Move to the next row
        cout << endl;
    }
}

int main() {
    int n;
    // Input: Asking the user to enter the size of the pattern
    cout << "Enter the number of the last character: ";
    cin >> n;  // User inputs the height of the triangle pattern

    // Function call to print the pattern
    print(n);

    return 0;  // End of the program
}

/*
Sample Input:
5

Sample Output:
E
D E
C D E
B C D E
A B C D E

Explanation:
- The pattern forms a triangle where rows increase in size with reverse-alphabetic alignment.
- The first row starts with the last letter ('E' for n = 5), and each subsequent row begins with the next previous letter in reverse.
- The characters in each row continue up to the last character ('E' in this case).
- Each row's starting character is calculated as `('A' + n - 1 - i)` where `i` is the row index.
*/
