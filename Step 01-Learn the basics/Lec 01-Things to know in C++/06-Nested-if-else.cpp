// Question: Write a C++ program that determines job eligibility based on the user's age.
// The program should:
// 1. Prompt the user to input their age.
// 2. Display one of the following messages based on the input:
//    - If age is less than 18: "Not eligible for a job"
//    - If age is between 18 and 49: "Eligible for a job"
//    - If age is between 50 and 59: "Eligible for a job, but will be retired soon"
//    - If age is 60 or above: "Retirement time!"
// 3. Ensure accurate and non-overlapping conditions to evaluate the age ranges correctly.

#include<bits/stdc++.h> // Includes all standard libraries
using namespace std;    // Using the standard namespace to avoid writing 'std::' repeatedly

int main() {
    int age; // Declare an integer variable to store the user's age

    cout << "Enter your age: "; // Prompt the user to enter their age
    cin >> age; // Take input from the user and store it in the 'age' variable

    if (age < 18) { // Check if age is less than 18
        cout << "Not eligible for a job"; // If true, print this message
    } 
    else if (age >= 18 && age < 50) { // Check if age is between 18 and 49
        cout << "Eligible for a job"; // Print this message if the condition is met
    } 
    else if (age >= 50 && age < 60) { // Check if age is between 50 and 59
        cout << "Eligible for a job, but will be retired soon"; // Print this message
    } 
    else if (age >= 60) { // Check if age is 60 or above
        cout << "Retirement time!"; // Print this message
    }

    return 0; // Indicate successful program termination
}
