#include<bits/stdc++.h> // Includes all standard libraries in C++
using namespace std;    // Allows usage of standard library functions without "std::" prefix

int main() {

    // Variable to store the user input
    int n; 
    // Prompting user for input
    cout << "Enter the value of N: "; 
    // Reading the value of N from the user
    cin >> n; 

    // Handle the edge case when n is 0
    if (n == 0) {
        // Directly return 0 and exit the program
        return n; 
    }
    // Handle the edge case when n is 1
    else if (n == 1) {
        // Output the first two Fibonacci numbers
        cout << 0 << " " << 1; 
    }
    // General case for n > 1
    else {
        // Array to store the Fibonacci sequence
        int fibo[n + 1]; 
        // First Fibonacci number
        fibo[0] = 0;     
        // Second Fibonacci number
        fibo[1] = 1;     

        // Generate the Fibonacci sequence iteratively
        for (int i = 2; i <= n; i++) {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
        // Output the Fibonacci series
        cout << "The Fibonacci series: " << endl;
        for (int i = 0; i <= n; i++) {
            cout << fibo[i] << endl;
        }
    }
    // End of the program
    return 0;
}
