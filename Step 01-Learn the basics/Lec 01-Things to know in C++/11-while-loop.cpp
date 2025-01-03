#include<bits/stdc++.h> // Includes all standard C++ libraries.
using namespace std;

int main(){

    // Initialize the variable 'i' to 0.
    int i = 0;

    // While loop runs as long as the condition 'i <= 5' is true.
    // A while loop checks the condition before each iteration, so if the condition is false initially, it will not execute at all.
    while(i <= 5) {
        // Print "Hello" followed by the current value of 'i'.
        cout << "Hello " << i << endl;

        // Increment 'i' by 1 in each iteration.
        // The update to 'i' is crucial, or else the loop would run indefinitely (infinite loop).
        i += 1;
    }

    return 0;
}
