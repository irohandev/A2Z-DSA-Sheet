#include <bits/stdc++.h>
using namespace std;

void explainUnorderedMap() {
    // Declare an unordered map
    unordered_map<int, int> umap;

    // Insert elements into the unordered map
    umap[1] = 2;          // Adds key 1 with value 2
    umap[2] = 4;          // Adds key 2 with value 4
    umap[3] = 6;          // Adds key 3 with value 6
    umap.emplace(4, 8);   // Adds key 4 with value 8

    // Iterate over the unordered map and print key-value pairs
    for (auto i : umap) {
        cout << i.first << " " << i.second << endl;
    }

    // Access the value associated with a key
    cout << "Value at key 1: " << umap[1] << endl;

    // Find an element by key
    auto it = umap.find(2);
    if (it != umap.end()) {
        cout << it->first << " " << it->second << endl; // Outputs key and value
    }

    // Erase a key-value pair by key
    umap.erase(2);

    // Size of the unordered map
    cout << "Size of unordered map: " << umap.size() << endl;
}

int main() {
    explainUnorderedMap();  // Call the function to demonstrate unordered map operations
    return 0;
}

/*
Notes:

Unordered Map:
- Stores key-value pairs in no particular order.
- Uses hashing internally, providing O(1) average time complexity for insert, find, and erase operations.

Core Functions:
1. insert() and emplace(): Add key-value pairs.
2. find(key): Retrieves the iterator to the key-value pair or end() if not found.
3. erase(key): Removes a key-value pair.
4. Accessing with `umap[key]`: Returns the value for the key or inserts the key with a default value if not present.
5. Iterating over the unordered map gives key-value pairs in arbitrary order.
*/
