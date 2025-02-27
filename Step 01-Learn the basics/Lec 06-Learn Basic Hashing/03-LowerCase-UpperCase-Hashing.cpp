// Includes all standard C++ libraries such as iostream, string, vector, etc.
#include<bits/stdc++.h>

// Allows usage of standard functions (cin, cout, etc.) without prefixing 'std::'
using namespace std;

int main() {
    // Declare a string variable to store user input.
    string s;
    // Take input string from the user.
    cin >> s;

    // Creating a hash array to store the frequency of each character in the string.
    int hash[256] = {0}; 
    // An array of size 256 to accommodate all ASCII characters.
    // All elements are initialized to 0.

    // Iterating through the string to populate the hash array with character frequencies.
    for (int i = 0; i < s.size(); i++) { 
        // Increment the count of the character `s[i]` in the hash array.
        hash[s[i]]++;
    }

    // Declare a variable to store the number of queries.
    int q;
    // Read the number of queries from the user.
    cin >> q;

    // Loop to process each query.
    while (q--) {       
        // Declare a character variable to store the query input.
        char c;
        // Read the character whose frequency needs to be checked.
        cin >> c;
        // Output the frequency of the queried character.
        // If the character is not present, the output will be 0.
        cout << hash[c] << endl;
    }

    // Indicate successful execution of the program.
    return 0;
}

/*
Sample Input:
abcaabc
3
a
b
z

Sample Output:
3
2
0

Explanation:
The input string is "abcaabc".
- Character 'a' appears 3 times.
- Character 'b' appears 2 times.
- Character 'z' does not appear in the string, so the output is 0.
*/