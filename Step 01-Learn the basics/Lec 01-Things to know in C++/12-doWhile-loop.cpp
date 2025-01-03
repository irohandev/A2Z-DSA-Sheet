#include<bits/stdc++.h> // Includes all standard C++ libraries.
using namespace std;

int main(){

    // Initialize the variable 'i' with the value 8.
    int i = 8;

    // Do-while loop: The code inside the loop will execute at least once.
    // After executing, it checks the condition (i <= 5).
    // If the condition is true, the loop runs again; otherwise, it terminates.
    do {
        // Print "Hello" followed by the current value of 'i'.
        cout << "Hello " << i << endl;

        // Increment 'i' by 1 in each iteration.
        i += 1;

    } while(i <= 5); // The loop continues as long as i is less than or equal to 5.

    return 0;
}

// Note:
// The 'do-while' loop guarantees that the code inside the loop will execute at least once.
// Even if the condition 'i <= 5' is false initially, the loop will still run once before checking the condition.
// In this case, 'i' starts at 8, and since the condition 'i <= 5' is false, the loop will execute just once.
