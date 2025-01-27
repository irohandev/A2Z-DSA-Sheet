#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter the size of the array
    cout << "Enter the size of the array (n): ";
    cin >> n; // Input size of the array

    // Declare an array of size 'n'
    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Store the elements into the array
    }

    // Explanation:
    // - We will create a hash array (frequency array) of size 13.
    // - This array will store the count of how many times each number appears in the input array.
    // - The index of the hash array represents the number, and the value at that index represents its frequency.

    int hash[13] = {0}; // Hash array initialized to 0 (size 13 assumes numbers are in range 0 to 12)

    // Precompute the frequency of each number in the array
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1; // Increment the count for the current number
    }

    // Prompt the user to enter the number of queries
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    // Process each query
    while (q--) {
        int number;

        // Input the number to check in the hash array
        cout << "Enter the number to check: ";
        cin >> number;

        // Check if the number is present and print its frequency
        if (hash[number] > 0) {
            cout << number << " is present " << hash[number] << " times!" << endl;
        } else {
            cout << number << " is not present :(" << endl;
        }
    }

    return 0;
}
