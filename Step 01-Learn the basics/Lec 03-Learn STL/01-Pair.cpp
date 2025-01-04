#include<bits/stdc++.h> // Includes all standard libraries in C++
using namespace std;    // Allows usage of standard library components without std:: prefix

// Function to explain and demonstrate the use of the 'pair' data structure
void explainPair() {
    // Creating a pair of integers and initializing it with values (1, 3)
    pair<int, int> a = {1, 3}; 
    // Accessing the first and second elements of the pair and printing them
    cout << a.first << " " << a.second << endl; // Output: 1 3

    // Creating a nested pair: the first element is an integer,
    // the second element is another pair (int, int)
    pair<int, pair<int, int>> b = {1, {2, 3}};
    // Accessing and printing the elements of the nested pair
    cout << b.first << " "            // Accessing the first element of the outer pair (1)
         << b.second.second << " "    // Accessing the second element of the inner pair (3)
         << b.second.first << endl;   // Accessing the first element of the inner pair (2)
    // Output: 1 3 2

    // Creating an array of pairs with each pair containing two integers
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    // Accessing the second element of the pair at index 1 of the array
    cout << arr[1].second << endl; // Output: 3
    // Explanation: arr[1] refers to the pair (2, 3), and arr[1].second is 3
}

int main() {
    // Calling the function to demonstrate 'pair'
    explainPair();
    return 0; // Indicates successful program termination
}
