#include <bits/stdc++.h>
using namespace std;

// Comparator function for custom sorting (Descending order)
bool comp(int a, int b) {
    return a > b;  // Returns true if a is greater than b
}

void explainSTL() {
    // Sorting: Sorts elements in ascending order by default
    vector<int> v = {5, 3, 8, 6, 2};
    sort(v.begin(), v.end());  // Default sort (ascending)
    cout << "Sorted vector (ascending): ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Sorting with custom comparator (Descending order)
    sort(v.begin(), v.end(), comp);
    cout << "Sorted vector (descending): ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Permutations: Generate all permutations of the vector
    cout << "All permutations of the vector: " << endl;
    do {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    // Built-in Popcount (counting number of set bits in an integer)
    int n = 29; // Binary: 11101, so popcount = 4
    cout << "Popcount of " << n << " (number of set bits): " << __builtin_popcount(n) << endl;

    // Unique: Removes duplicate elements from a sorted vector
    vector<int> v2 = {5, 3, 3, 8, 2, 2};
    sort(v2.begin(), v2.end());  // Sorting to remove duplicates
    v2.erase(unique(v2.begin(), v2.end()), v2.end());  // Removes duplicates
    cout << "Vector after removing duplicates: ";
    for (int i : v2) {
        cout << i << " ";
    }
    cout << endl;

    // Binary Search: Check if an element is present in a sorted container
    if (binary_search(v2.begin(), v2.end(), 3)) {
        cout << "Element 3 found in the vector." << endl;
    } else {
        cout << "Element 3 not found in the vector." << endl;
    }

    // Lower and Upper Bound: Find range for a specific value
    auto lb = lower_bound(v2.begin(), v2.end(), 3);  // First position of 3
    auto ub = upper_bound(v2.begin(), v2.end(), 3);  // Position after the last 3
    cout << "Lower bound for 3: " << distance(v2.begin(), lb) << endl;
    cout << "Upper bound for 3: " << distance(v2.begin(), ub) << endl;
}

int main() {
    explainSTL();  // Call the function to demonstrate sorting, permutations, and popcount
    return 0;
}

/*
Notes:

1. Sorting (std::sort):
   - By default, sort() sorts the elements in ascending order.
   - You can provide a custom comparator function to change the sorting order (e.g., descending order).

2. Permutations (std::next_permutation):
   - next_permutation() generates the next permutation in lexicographical order.
   - You can use this function in a loop to generate all permutations of a sequence.

3. Comp (Custom Comparator Function):
   - The comp() function is used to define custom sorting logic. In this case, it sorts in descending order.

4. Popcount (std::builtin_popcount):
   - __builtin_popcount(x) returns the number of set bits (1s) in the binary representation of integer x.
   - Example: __builtin_popcount(29) will return 4 (binary of 29 is 11101).

5. Unique (std::unique):
   - unique() removes duplicate consecutive elements in a sorted container.
   - After using unique(), the container is resized by erasing the duplicates.

6. Binary Search (std::binary_search):
   - binary_search() is used to check if a particular element exists in a sorted container.
   - It returns true if the element is found, otherwise false.

7. Lower Bound (std::lower_bound):
   - lower_bound() finds the first position where a value can be inserted in a sorted range without breaking the order.

8. Upper Bound (std::upper_bound):
   - upper_bound() finds the first element greater than a specified value in a sorted range.

*/
