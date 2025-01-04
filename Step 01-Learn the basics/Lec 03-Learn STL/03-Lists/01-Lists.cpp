#include<bits/stdc++.h>
using namespace std;

void explainList() {
    // Declare a list of integers
    list<int> ls;

    // Add an element to the end of the list
    ls.push_back(2);  // Adds '2' to the end - {2}

    // Adds an element to the end of the list using emplace_back
    ls.emplace_back(4);  // Adds '4' to the end, emplace_back is more efficient as it constructs the object in place - {2,4}

    // Adds an element to the front of the list
    ls.push_front(5);  // Adds '5' to the front of the list - {5,2,4}

    // Incorrect line: This is not a valid syntax for emplace_front
    // ls.emplace_front(); (2, 4); // This line is not valid. emplace_front() expects arguments to construct an element, but here no arguments are given and the tuple is incorrectly placed.

    // Note: The remaining functions work similarly to vectors
    // begin() - Returns an iterator to the first element of the list
    // end() - Returns an iterator to one past the last element
    // rbegin() - Returns a reverse iterator to the last element
    // rend() - Returns a reverse iterator to one before the first element
    // clear() - Removes all elements from the list
    // insert() - Inserts elements at a specified position
    // size() - Returns the number of elements in the list
    // swap() - Swaps the contents of the list with another list
}

int main() {
    explainList();  // Call the function to demonstrate list operations
    return 0;
}
