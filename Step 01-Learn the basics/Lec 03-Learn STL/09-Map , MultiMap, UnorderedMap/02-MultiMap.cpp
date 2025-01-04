#include <bits/stdc++.h>
using namespace std;

void explainMultiMap() {
    // Declare a multimap
    multimap<int, int> mmap;

    // Insert elements into the multimap
    mmap.insert({1, 2});
    mmap.insert({1, 3});  // Allows duplicate keys
    mmap.insert({2, 4});
    mmap.insert({3, 1});

    // Iterate over the multimap and print key-value pairs
    for (auto i : mmap) {
        cout << i.first << " " << i.second << endl;
    }

    // Find elements with a specific key
    auto it = mmap.find(1);  // Finds the first occurrence of key 1
    if (it != mmap.end()) {
        cout << "Found: " << it->first << " " << it->second << endl;
    }

    // Count occurrences of a key
    cout << "Count of key 1: " << mmap.count(1) << endl;

    // Erase all occurrences of a key
    mmap.erase(1);

    // Size after erasing
    cout << "Size after erasing key 1: " << mmap.size() << endl;
}

int main() {
    explainMultiMap();  // Call the function to demonstrate multimap operations
    return 0;
}

/*
Notes:

MultiMap Basics:
- A multimap allows duplicate keys, unlike a regular map.
- Elements are stored in sorted order based on keys.

Core Operations:
1. insert(): Adds key-value pairs, allowing duplicate keys.
2. find(key): Returns an iterator to the first occurrence of the key.
3. count(key): Returns the number of occurrences of the key.
4. erase(key): Removes all elements with the specified key.

Additional Features:
1. lower_bound(key): Iterator to the first key >= the given key.
2. upper_bound(key): Iterator to the first key > the given key.
3. Iterating over the multimap retrieves all key-value pairs, including duplicates.
*/
