#include<bits/stdc++.h>
using namespace std;


void explainStack() {
    // Declare a stack of integers
    stack<int> st;

    // Pushing elements onto the stack
    st.push(1);  // Adds '1' to the stack
    st.push(2);  // Adds '2' to the stack
    st.push(3);  // Adds '3' to the stack
    st.push(4);  // Adds '4' to the stack
    st.push(5);  // Adds '5' to the stack
    st.emplace(6);  // Adds '6' to the stack (constructs in place)

    // Display the top element of the stack
    cout << st.top() << endl;  // Outputs 6, which is the top element

    // Pop the top element from the stack
    st.pop();  // Removes '6', the top element

    // Display the new top element of the stack
    cout << st.top() << endl;  // Outputs 5, now the top element after popping

    // Display the size of the stack
    cout << st.size() << endl;  // Outputs 5, the number of elements in the stack

    // Check if the stack is empty
    cout << st.empty() << endl;  // Outputs 0 (false), as the stack is not empty

    // Create two stacks to demonstrate swapping
    stack<int> s1, s2;

    // Swap the contents of st and s2
    st.swap(s2);  // Swaps the elements of stack 'st' with 's2'
}

int main() {
    explainStack();  // Call the function to demonstrate stack operations
    return 0;
}

/*
Notes:

- stack follows LIFO (Last In First Out) principle. The last element pushed onto the stack is the first one to be popped out.

- Memory Management: Unlike arrays, there is no fixed memory location for elements in a stack. The operations push(), pop(), and top() are used to manage stack elements.

- Core Operations:
  1. push(): Adds an element to the stack.
  2. pop(): Removes the top element from the stack.
  3. top(): Retrieves the top element of the stack without removing it.

- Other Functions:
  1. size(): Returns the number of elements currently in the stack.
  2. empty(): Checks if the stack is empty. Returns true if empty, false otherwise.
  3. swap(): Swaps the contents of two stacks.
*/
