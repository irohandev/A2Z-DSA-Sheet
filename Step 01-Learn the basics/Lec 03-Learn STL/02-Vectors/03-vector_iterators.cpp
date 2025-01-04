#include <iostream>
#include <vector>
using namespace std;

void vectorIterators() {
    vector<int> v = {10, 20, 30, 40, 50};

    vector<int>::iterator it = v.begin();
    it++;
    cout << "Second element using iterator: " << *it << endl; // Output: 20

    it = it + 2;
    cout << "Fourth element using iterator: " << *it << endl; // Output: 40

    cout << "All elements using for-loop and iterator: ";
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

    cout << "All elements using range-based loop: ";
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vectorIterators();
    return 0;
}
