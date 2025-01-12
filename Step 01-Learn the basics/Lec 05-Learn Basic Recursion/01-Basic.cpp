#include<bits/stdc++.h> // Include all standard libraries in C++
using namespace std;    // Use the standard namespace

// Recursive function to print numbers from 0 to 3
void recursion(int count) {
    // Base case: Stop recursion when count reaches 4
    if (count == 4) {
        return;  // Exit the function
    } 

    // Print the current value of count
    cout << count << endl;

    // Recursive call: Increment the value of count and call recursion again
    recursion(count + 1);  
}

int main() {
    // Start the recursion by calling the function with an initial count of 0
    recursion(0);  

    // Exit the program
    return 0;
}
