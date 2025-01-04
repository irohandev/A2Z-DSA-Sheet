#include <iostream>
#include <vector>
using namespace std;

void vectorModifiers() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Erase single element
    v.erase(v.begin() + 1); // Erase 20
    cout << "After erasing second element: ";
    for (auto i : v) cout << i << " "; // Output: 10 30 40 50
    cout << endl;

    // Erase range of elements
    v.erase(v.begin() + 1, v.begin() + 3); // Erase 30, 40
    cout << "After erasing range: ";
    for (auto i : v) cout << i << " "; // Output: 10 50
    cout << endl;

    // Insert elements
    v.insert(v.begin(), 100); // Insert 100 at beginning
    v.insert(v.begin() + 1, 2, 200); // Insert two 200s
    cout << "After inserting elements: ";
    for (auto i : v) cout << i << " "; // Output: 100 200 200 10 50
    cout << endl;

    // Pop back
    v.pop_back(); // Remove last element
    cout << "After pop_back: ";
    for (auto i : v) cout << i << " "; // Output: 100 200 200 10
    cout << endl;

    // Clear the vector
    v.clear();
    cout << "Vector size after clearing: " << v.size() << endl; // Output: 0
}

int main() {
    vectorModifiers();
    return 0;
}
