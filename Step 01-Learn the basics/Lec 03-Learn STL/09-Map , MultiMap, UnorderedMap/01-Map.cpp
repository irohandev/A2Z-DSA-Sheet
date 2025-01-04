#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    // Declare a map with int keys and int values
    map<int, int> mpp;

    // Declare a map with int keys and pair<int, int> as values
    map<int, pair<int, int>> mppPair;

    // Declare a map with pair<int, int> as keys and int as values
    map<pair<int, int>, int> mppNested;

    // Insert elements into the map
    mpp[1] = 2;  // Adds key-value pair {1, 2}
    mpp.emplace(3, 1);  // Adds key-value pair {3, 1}
    mpp.insert({2, 4});  // Adds key-value pair {2, 4}

    // Insert into a map with a pair as a key
    mppNested[{2, 3}] = 10;  // Adds key-value pair {{2, 3}, 10}

    // Iterate over the map and print the key-value pairs
    for (auto i : mpp) {
        cout << i.first << " " << i.second << endl;
    }

    // Accessing elements in the map
    cout << mpp[1] << endl;  // Outputs the value corresponding to key 1 (2 in this case)
    cout << mpp[5] << endl;  // Key 5 is not present, so it initializes to 0 and outputs 0

    // Find an element in the map
    auto it = mpp.find(3);  // Returns iterator to the element with key 3
    if (it != mpp.end()) {
        cout << it->second << endl;  // Outputs the value corresponding to key 3 (1 in this case)
    }

    // Trying to find a key that is not present
    it = mpp.find(5);  // Returns mpp.end() as key 5 is not present

    // Lower bound and upper bound
    auto lb = mpp.lower_bound(2);  // Iterator to the first key >= 2
    if (lb != mpp.end()) {
        cout << "Lower Bound: " << lb->first << " " << lb->second << endl;
    }

    auto ub = mpp.upper_bound(3);  // Iterator to the first key > 3
    if (ub != mpp.end()) {
        cout << "Upper Bound: " << ub->first << " " << ub->second << endl;
    }

    // Erase, swap, size, and empty are similar to other containers
    mpp.erase(2);  // Removes the key-value pair with key 2
    cout << "Size after erase: " << mpp.size() << endl;
}

int main() {
    explainMap();  // Call the function to demonstrate map operations
    return 0;
}

/*
Notes:

Map Basics:
- A map stores key-value pairs in a sorted order based on keys.
- Keys are unique, and any duplicate insertion of keys will overwrite the existing value.

Core Operations:
1. mpp[key]: Accesses the value associated with the key. If the key is not present, it initializes the value to 0.
2. find(key): Returns an iterator to the key if found, otherwise returns end().
3. lower_bound(key): Returns an iterator to the first element with a key >= the given key.
4. upper_bound(key): Returns an iterator to the first element with a key > the given key.
5. insert() and emplace(): Add key-value pairs to the map.

Additional Functions:
1. erase(key): Removes the key-value pair with the specified key.
2. size(): Returns the number of elements in the map.
3. empty(): Checks if the map is empty.
4. clear(): Removes all elements from the map.

Key Characteristics:
- Maps are implemented using Red-Black Trees, ensuring O(log n) complexity for insertions, deletions, and lookups.
- Keys are stored in sorted order.
- Use cases include scenarios where sorted data and fast lookups by keys are required.
*/
