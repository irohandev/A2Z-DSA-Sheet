#include <iostream>
#include <vector>
using namespace std;

void vectorSwapAndEmpty() {
    vector<int> v1 = {10, 20};
    vector<int> v2 = {50, 90};

    cout << "Before swapping:" << endl;
    cout << "v1: ";
    for (auto i : v1) cout << i << " "; // Output: 10 20
    cout << endl;

    cout << "v2: ";
    for (auto i : v2) cout << i << " "; // Output: 50 90
    cout << endl;

    v1.swap(v2);

    cout << "After swapping:" << endl;
    cout << "v1: ";
    for (auto i : v1) cout << i << " "; // Output: 50 90
    cout << endl;

    cout << "v2: ";
    for (auto i : v2) cout << i << " "; // Output: 10 20
    cout << endl;

    cout << "Is v1 empty? " << (v1.empty() ? "Yes" : "No") << endl; // Output: No
}

int main() {
    vectorSwapAndEmpty();
    return 0;
}
