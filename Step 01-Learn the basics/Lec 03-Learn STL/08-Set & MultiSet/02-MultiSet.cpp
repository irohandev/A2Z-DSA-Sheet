#include <bits/stdc++.h>
using namespace std;

void explainMultiSet() {
    // Everything is like a set, but can store duplicated elements as well
    multiset<int> ms;

    // Inserting elements into the multiset
    ms.insert(1);  // Adds '1' to the multiset
    ms.insert(1);  // Adds '1' to the multiset again (duplicates allowed)
    ms.insert(1);  // Adds '1' again
    ms.insert(1);  // Adds '1' once more

    // Erasing all occurrences of '1' from the multiset
    ms.erase(1);  // Removes all occurrences of '1' from the multiset

    // Counting the occurrences of '1' in the multiset
    int cnt = ms.count(1);  // Returns the number of occurrences of '1' in the multiset

    // Erasing a single occurrence of '1' (if it exists)
    ms.erase(ms.find(1));  // Removes one occurrence of '1'

    // Erasing a range of elements from the multiset
    auto it = ms.find(1);
    advance(it, 2);  // Move the iterator 2 steps forward
    ms.erase(ms.find(1), it);  // Removes two occurrences of '1'

    // Rest of the functions are the same as those of a set
}

int main() {
    explainMultiSet();  // Call the function to demonstrate multiset operations
    return 0;
}

/*
Notes:

- Multiset behaves similarly to a set, but it can store duplicate elements.
- Core Operations:
  1. insert(): Adds elements to the multiset (duplicates are allowed).
  2. erase(): Removes elements from the multiset. It can remove specific values or use an iterator to remove a range of elements.
  3. count(): Returns the number of occurrences of a specific element in the multiset.
  4. find(): Finds and returns an iterator to the first occurrence of the element.
  
- Rest of the functions like begin(), end(), size(), and empty() work similarly to those in set.
*/
