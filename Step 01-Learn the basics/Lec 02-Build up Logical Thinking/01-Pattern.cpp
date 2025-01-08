#include<bits/stdc++.h>
using namespace std;

// Using function to print a square pattern of asterisks of size n x n
void print(int n) {
    // Loop for rows
    for (int i = 0; i < n; i++) {
        // Loop for columns
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        // Print a newline after each row
        cout << endl;
    }
}

int main() {
    // Input: size of the square (number of rows and columns)
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;

    // Calling the function to print the pattern
    print(n);
    return 0;
}

/*
Sample Input:
5

Sample Output:
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/

// Alternative implementation: Directly inside the main function
/*
int main() {
    // Input: size of the square
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;

    // Loop for rows
    for (int i = 1; i <= n; i++) {
        // Loop for columns
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        // Print a newline after each row
        cout << "\n";
    }

    return 0;
}
*/
