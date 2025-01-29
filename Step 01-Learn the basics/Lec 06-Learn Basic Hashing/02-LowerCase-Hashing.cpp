#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    // Step 1: Input the string from the user
    cout << "Enter the string: ";
    cin >> s; // The user provides a lowercase string (e.g., "apple")

    // Step 2: Create a hash array to store the frequency of each character
    // - The size of the hash array is 26, corresponding to 26 letters in the alphabet (a-z).
    // - Each index of the hash array represents a character, with index 0 for 'a', 1 for 'b', ..., 25 for 'z'.
    int hash[26] = {0}; // Initialize the hash array with 0

    // Step 3: Calculate the frequency of each character in the string
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++; // Increment the count for the character
        // Explanation:
        // - 's[i] - 'a'' converts the character to an index.
        //   For example, 'a' - 'a' = 0, 'b' - 'a' = 1, ..., 'z' - 'a' = 25.
    }

    // Step 4: Input the number of queries
    cout << "Enter the number of queries: ";
    int q;
    cin >> q; // The user specifies how many characters they want to query

    // Step 5: Process each query
    while (q--) {
        char c;

        // Input the character to query
        cin >> c; // The user provides a character (e.g., 'a', 'p', etc.)

        // Step 6: Output the frequency of the queried character
        cout << "Frequency of '" << c << "' is: " << hash[c - 'a'] << endl;
        // Explanation:
        // - 'c - 'a'' calculates the index for the queried character in the hash array.
        // - The value at that index represents the frequency of the character in the string.
    }

    return 0;
}
