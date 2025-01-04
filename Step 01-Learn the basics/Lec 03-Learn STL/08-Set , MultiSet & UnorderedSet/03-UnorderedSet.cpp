#include <bits/stdc++.h>
using namespace std;

void explainUnorderedSet() {
    // Unordered set stores unique elements but without any specific order
    unordered_set<int> us;

    // Inserting elements into the unordered set
    us.insert(1);  // Adds '1' to the unordered set
    us.insert(2);  // Adds '2' to the unordered set
    us.insert(3);  // Adds '3' to the unordered set
    us.insert(1);  // Duplicate, will not be added

    // Checking if an element exists using find()
    if (us.find(2) != us.end()) {
        cout << "2 exists in the unordered set" << endl;
    } else {
        cout << "2 does not exist in the unordered set" << endl;
    }

    // Erasing an element from the unordered set
    us.erase(2);  // Removes '2' from the unordered set

    // Counting occurrences of an element (will be 0 or 1 since duplicates are not allowed)
    if (us.count(2) > 0) {
        cout << "2 is present in the unordered set" << endl;
    } else {
        cout << "2 is not present in the unordered set" << endl;
    }

    // Iterating through the unordered set
    for (auto it = us.begin(); it != us.end(); ++it) {
        cout << *it << " ";  // Outputs all elements in the unordered set (order is not guaranteed)
    }
    cout << endl;

    // Clearing all elements in the unordered set
    us.clear();  // Removes all elements from the unordered set

    // Checking if the unordered set is empty
    if (us.empty()) {
        cout << "The unordered set is empty" << endl;
    } else {
        cout << "The unordered set is not empty" << endl;
    }
}

int main() {
    explainUnorderedSet();  // Call the function to demonstrate unordered_set operations
    return 0;
}

/*
Notes:

- Unordered set stores unique elements in an unordered manner.
- It is implemented using hash tables, so operations like insert(), erase(), and find() have average time complexity of O(1).
- Core Operations:
  1. insert(): Adds an element to the unordered set. Duplicates are ignored.
  2. erase(): Removes an element from the unordered set.
  3. count(): Checks the presence of an element. Returns 0 or 1 since duplicates are not allowed.
  4. find(): Returns an iterator to the element if found, otherwise returns end().
  5. clear(): Removes all elements from the unordered set.
  6. empty(): Checks if the unordered set is empty.
- Iteration: Use iterators to traverse the unordered set, but the order of traversal is not guaranteed.
- Unordered sets are faster than sets for most operations due to hash-based implementation, but they do not maintain any order.
*/
