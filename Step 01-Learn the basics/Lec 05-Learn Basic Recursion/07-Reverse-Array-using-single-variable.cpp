#include <bits/stdc++.h> // Include all standard libraries for simplicity
using namespace std;      // Use the standard namespace to avoid prefixing with 'std::'

// Function to print the elements of the array
void printArray(int arr[], int n) {
    cout << "Reversed array: "; // Output a message indicating the array is reversed
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print each element of the array followed by a space
    }
    cout << endl;              // Print a newline at the end for better readability
}

// Function to reverse the array
void reverse(int arr[], int n) {
    int p1 = 0, p2 = n - 1; // Initialize two pointers: p1 at the start, p2 at the end
    while (p1 < p2) {       // Continue swapping until the pointers meet or cross
        swap(arr[p1], arr[p2]); // Swap the elements at p1 and p2
        p1++;                  // Move the p1 pointer towards the center
        p2--;                  // Move the p2 pointer towards the center
    }
}

// Main function where program execution begins
int main() {
    int n; // Declare a variable to store the size of the array
    cout << "Enter the size of the array: "; // Prompt user to enter array size
    cin >> n; // Take input for the size of the array

    int arr[n]; // Declare an array of size 'n'
    cout << "Enter " << n << " elements of the array: "; // Prompt user to enter elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Take input for each element of the array
    }

    reverse(arr, n);      // Call the reverse function to reverse the array
    printArray(arr, n);   // Call the printArray function to display the reversed array

    return 0; // Return 0 to indicate successful program termination
}
