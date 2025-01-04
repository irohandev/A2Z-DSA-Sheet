#include <bits/stdc++.h>
using namespace std;

void explainPQ() {
    // Declare a max-heap priority queue (default behavior)
    priority_queue<int> pq;

    // Push elements to the priority queue
    pq.push(5);  // Adds '5' to the priority queue
    pq.push(2);  // Adds '2' to the priority queue
    pq.push(8);  // Adds '8' to the priority queue
    pq.emplace(10);  // Adds '10' to the priority queue (constructs in place)

    // Display the top (highest priority) element of the max-heap
    cout << pq.top() << endl;  // Outputs 10, the largest element

    // Pop the top element from the priority queue
    pq.pop();  // Removes '10', the top element

    // Display the new top element of the max-heap after popping
    cout << pq.top() << endl;  // Outputs 8, the new top element

    // Declare a min-heap priority queue by specifying the comparator (greater<int>)
    priority_queue<int, vector<int>, greater<int>> p;

    // Push elements to the min-heap priority queue
    p.push(5);  // Adds '5' to the min-heap
    p.push(2);  // Adds '2' to the min-heap
    p.push(8);  // Adds '8' to the min-heap
    p.emplace(10);  // Adds '10' to the min-heap (constructs in place)

    // Display the top (highest priority) element of the min-heap
    cout << p.top() << endl;  // Outputs 2, the smallest element (min-heap behavior)
}

int main() {
    explainPQ();  // Call the function to demonstrate priority queue operations
    return 0;
}

/*
Notes:

- Max-Heap Priority Queue: By default, a priority queue in C++ works as a max-heap. The largest element is always at the top.
  - The operations `push()`, `pop()`, and `top()` work similarly to stack and queue, but the `top()` retrieves the largest element based on priority.

- Min-Heap Priority Queue: You can create a min-heap by using a custom comparator (greater<int> in this case), which ensures that the smallest element is at the top.
  - The `top()` in a min-heap returns the smallest element instead of the largest one.

- Core Operations:
  1. `push()`: Adds an element to the priority queue.
  2. `pop()`: Removes the top (highest priority) element from the queue.
  3. `top()`: Retrieves the top element, which is the element with the highest priority.

- Other Functions:
  1. `empty()`: Checks if the priority queue is empty.
  2. `size()`: Returns the number of elements in the priority queue.
*/
