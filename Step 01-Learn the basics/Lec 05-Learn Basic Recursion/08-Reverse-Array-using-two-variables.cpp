#include <bits/stdc++.h>
using namespace std;

// Function to reverse the elements of an array using recursion
void reverse(int arr[], int l, int r) {
    // Base case: If the left index is greater than or equal to the right index, stop recursion
    if (l >= r) {
        return;
    }

    // Swap the elements at the current left and right indices
    swap(arr[l], arr[r]);

    // Recursive call to process the remaining elements by moving inward
    reverse(arr, l + 1, r - 1);
}

// Function to input elements into an array and print the array
void inputArr(int arr[], int n) {
    // Input the array elements from the user
    for (int i = 0; i < n; i++) {
        cout << "Enter array element: ";
        cin >> arr[i];
    }

    // Print the array to show the initial inputted elements
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n; // Variable to store the size of the array

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Declare an array of size `n`
    int arr[n];

    // Input the array elements
    inputArr(arr, n);

    // Call the recursive function to reverse the array
    reverse(arr, 0, n - 1);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
