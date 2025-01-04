#include <iostream>
#include <vector>
using namespace std;

void vectorInitialization() {
    vector<int> v1(5, 100);   // Create a vector of size 5 with all values 100
    vector<int> v2(v1);       // Copy of v1

    cout << "Vector v1: ";
    for (auto i : v1) cout << i << " "; // Output: 100 100 100 100 100
    cout << endl;

    cout << "Copied vector v2: ";
    for (auto i : v2) cout << i << " "; // Output: 100 100 100 100 100
    cout << endl;
}

int main() {
    vectorInitialization();
    return 0;
}
