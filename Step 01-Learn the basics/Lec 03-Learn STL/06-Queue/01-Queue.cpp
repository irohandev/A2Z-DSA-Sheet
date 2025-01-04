#include <bits/stdc++.h>
using namespace std;

void explainQueue() {
    // Declare a queue of integers
    queue<int> q;

    // Enqueue elements to the queue
    q.push(1);  // Adds '1' to the queue
    q.push(2);  // Adds '2' to the queue
    q.push(3);  // Adds '3' to the queue
    q.push(4);  // Adds '4' to the queue
    q.push(5);  // Adds '5' to the queue

    // Display the front element of the queue
    cout << q.front() << endl;  // Outputs 1, which is the front element

    // Dequeue the front element from the queue
    q.pop();  // Removes '1', the front element

    // Display the new front element of the queue
    cout << q.front() << endl;  // Outputs 2, now the front element after popping

    // Display the size of the queue
    cout << q.size() << endl;  // Outputs 4, the number of elements in the queue

    // Check if the queue is empty
    cout << q.empty() << endl;  // Outputs 0 (false), as the queue is not empty

    // Create two queues to demonstrate swapping
    queue<int> q1, q2;

    // Swap the contents of q and q2
    q.swap(q2);  // Swaps the elements of queue 'q' with 'q2'
}

int main() {
    explainQueue();  // Call the function to demonstrate queue operations
    return 0;
}

/*
Notes:

- queue follows FIFO (First In First Out) principle. The first element pushed onto the queue is the first one to be popped out.

- Memory Management: Unlike arrays, there is no fixed memory location for elements in a queue. The operations push(), pop(), and front() are used to manage queue elements.

- Core Operations:
  1. push(): Adds an element to the queue.
  2. pop(): Removes the front element from the queue.
  3. front(): Retrieves the front element of the queue without removing it.

- Other Functions:
  1. size(): Returns the number of elements currently in the queue.
  2. empty(): Checks if the queue is empty. Returns true if empty, false otherwise.
  3. swap(): Swaps the contents of two queues.
*/
