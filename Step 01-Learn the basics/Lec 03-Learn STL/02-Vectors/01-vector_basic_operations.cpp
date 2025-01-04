#include <iostream>
#include <vector>
using namespace std;

void vectorBasicOperations() {
    vector<int> v;

    v.push_back(1);         // Push 1 at the end of the vector
    v.emplace_back(2);      // Dynamically allocate space and push 2

    cout << "Vector v: ";
    for (auto i : v) cout << i << " "; // Output: 1 2
    cout << endl;

    vector<pair<int, int>> vec;        // Pair vector
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    cout << "Pair vector: ";
    for (auto p : vec) cout << "(" << p.first << "," << p.second << ") "; // Output: (1,2) (3,4)
    cout << endl;
}

int main() {
    vectorBasicOperations();
    return 0;
}
