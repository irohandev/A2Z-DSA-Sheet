#include <bits/stdc++.h>
using namespace std;

void explainSet() {
    // Declare a set of integers (Set automatically stores unique elements)
    set<int> st;

    // Insert elements into the set
    st.insert(1);  // Inserts '1' into the set
    st.emplace(2);  // Inserts '2' into the set, more efficient than insert for certain types
    st.insert(2);  // '2' is already in the set, so it won't be inserted again
    st.insert(3);  // Inserts '3' into the set

    // Functions like begin(), end(), rbegin(), rend(), size(), empty(), and swap()
    // work similarly to other containers like vector.

    // Find an element in the set (returns an iterator to the element if found, or st.end() if not found)
    auto i = st.find(3);  // Finds the element '3'
    
    // Try to find a non-existing element (returns st.end() as it doesn't exist)
    auto i2 = st.find(6);  // Element '6' does not exist in the set

    // Erase an element from the set (removes element with value 5 if it exists)
    st.erase(5);  // Removes '5' from the set (no effect if '5' is not found)

    // Count the occurrences of an element in the set (returns 1 if element exists, 0 if not)
    int ct = st.count(1);  // Returns 1 as '1' is in the set

    // Erase using iterator (find the iterator of element '3' and remove it)
    auto it = st.find(3);
    st.erase(it);  // Removes the element '3'

    // Erase a range of elements from the set (from element '2' to element '4')
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);  // Removes elements from '2' to '3'

    // Lower bound: Finds the first element that is not less than the given value (2)
    auto it3 = st.lower_bound(2);  // Returns iterator to the first element >= 2

    // Upper bound: Finds the first element that is greater than the given value (3)
    auto it4 = st.upper_bound(3);  // Returns iterator to the first element > 3
}

int main() {
    explainSet();  // Call the function to demonstrate set operations
    return 0;
}

/*
Notes:

- Set stores only unique elements. If you attempt to insert a duplicate element, it will not be added.
- Ordered Collection: Elements in the set are stored in sorted order.
- Core Operations:
  1. `insert()`: Adds an element to the set. If the element already exists, it does nothing.
  2. `emplace()`: Similar to `insert()`, but more efficient for certain types, as it constructs the element in place.
  3. `find()`: Searches for an element in the set. Returns an iterator to the element if found, or `st.end()` if not found.
  4. `erase()`: Removes an element or a range of elements from the set.
  5. `count()`: Returns the number of occurrences of an element (always 0 or 1 for sets).
  6. `lower_bound()`: Returns an iterator to the first element that is not less than the given value.
  7. `upper_bound()`: Returns an iterator to the first element that is greater than the given value.

- Other Functions:
  1. `begin()`, `end()`, `rbegin()`, `rend()`: Iterate over the set.
  2. `size()`: Returns the number of elements in the set.
  3. `empty()`: Checks if the set is empty.
  4. `swap()`: Swaps the contents of two sets.
*/ 
