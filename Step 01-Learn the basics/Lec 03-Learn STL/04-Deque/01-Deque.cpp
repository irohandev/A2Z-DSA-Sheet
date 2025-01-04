#include<bits/stdc++.h>
using namespace std;

void explainDeque() {
    // Declare a deque of integers
    deque<int> dq;

    // Add an element to the end of the deque
    dq.push_back(2);  // Adds '2' to the end

    // Adds an element to the end of the deque using emplace_back
    dq.emplace_back(4);  // Adds '4' to the end, emplace_back is more efficient as it constructs the object in place

    // Adds an element to the front of the deque
    dq.push_front(5);  // Adds '5' to the front of the deque

    // Adds an element to the front of the deque using emplace_front
    dq.emplace_front(1);  // Adds '1' to the front, emplace_front constructs the element in place

    // Note: The remaining functions work similarly to vectors
    // begin() - Returns an iterator to the first element of the deque
    // end() - Returns an iterator to one past the last element
    // rbegin() - Returns a reverse iterator to the last element
    // rend() - Returns a reverse iterator to one before the first element
    // clear() - Removes all elements from the deque
    // insert() - Inserts elements at a specified position
    // size() - Returns the number of elements in the deque
    // swap() - Swaps the contents of the deque with another deque

    // Example: Accessing elements
    cout << "First element: " << dq.front() << endl; // Front of deque
    cout << "Last element: " << dq.back() << endl;  // Last of deque

    // Example: Deleting elements
    dq.pop_back();  // Removes the last element (4)
    dq.pop_front(); // Removes the first element (1)

    // Display remaining elements in deque
    cout << "Remaining elements: ";
    for (int elem : dq) {
        cout << elem << " ";  // Displaying deque elements
    }
    cout << std::endl;
}

int main() {
    explainDeque();  // Call the function to demonstrate deque operations
    return 0;
}
