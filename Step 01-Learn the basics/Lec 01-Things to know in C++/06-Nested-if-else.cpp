// Question: Write a C++ program that takes the age of the user as input and determines job eligibility.
// The program should:
// 1. Print "Not eligible for job" if the age is below 18.
// 2. Print "Eligible for job" if the age is between 18 and 57 (inclusive).
//    - If the age is 55 or above, it should also print ", but retirement soon".
// 3. Print "Retirement time" if the age is above 57.

#include<bits/stdc++.h> // Includes all standard libraries
using namespace std;    // Using the standard namespace to avoid writing 'std::' repeatedly

int main() {
    int age; // Declare an integer variable to store the user's input

    cout << "Enter your age : ";
    cin >> age; // Take input for the user's age

    if (age < 18) { // If age is less than 18
        cout << "Not eligible for job"; // Print "Not eligible for job"
    }
    else if (age <= 57) { // If age is between 18 and 57 (inclusive)
        cout << "Eligible for job"; // Print "Eligible for job"
        
        // Nested if statement to check if age is 55 or above
        if (age >= 55) { 
            cout << ", but retirement soon"; // If age is 55 or above, print additional message
        }
    }
    else { // If age is greater than 57
        cout << "Retirement time"; // Print "Retirement time"
    }

    return 0; // Indicate successful program termination
}
