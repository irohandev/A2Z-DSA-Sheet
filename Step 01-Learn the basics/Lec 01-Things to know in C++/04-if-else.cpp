// Question: Write a C++ program to check if a person is an adult or a minor based on their age.
// The program should:
// 1. Prompt the user to enter their age.
// 2. Determine whether the user is an adult (18 years or older) or a minor (less than 18 years).
// 3. Display an appropriate message based on the age entered.

#include<bits/stdc++.h> // Includes all standard libraries for convenience
using namespace std;    // Using the standard namespace to avoid writing 'std::' repeatedly

int main(){
    int age; // Declare an integer variable to store the user's age
    
    cout << "Enter your age = "; // Prompt the user to enter their age
    cin >> age; // Take input from the user and store it in the 'age' variable

    if(age >= 18){ // Check if the user's age is 18 or greater
        cout << "You are an adult!"; // If true, print that the user is an adult
    } else { // If the age is less than 18
        cout << "You are a minor!"; // Print that the user is a minor
    }

    return 0; // Indicate successful program termination
}
