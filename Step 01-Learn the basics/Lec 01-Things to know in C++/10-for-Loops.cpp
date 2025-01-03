#include<bits/stdc++.h> // Includes all standard C++ libraries.
using namespace std;

int main(){
    // Print a greeting message "Hiiiiiiiii" followed by a newline.
    // This is done using the cout statement.
    cout << "Hiiiiiiiii" << "\n";

    // A for loop that runs from 1 to 10. The loop will execute 10 times.
    // The loop variable 'i' starts from 1 and increments by 1 on each iteration.
    for(int i = 1; i <= 10; i++){
        // Print "Hello" followed by a newline on each iteration.
        // This will print "Hello" 10 times, each on a new line.
        cout << "Hello" << "\n";
    }

    // Note:
    // The variable 'i' is declared inside the for loop. 
    // As a result, it is only accessible within the scope of the loop.
    // If we try to access 'i' outside the loop, it will result in a compilation error 
    // because 'i' is out of scope.
    // Uncommenting the following line would cause an error:
    // cout << i;

    return 0;
}
