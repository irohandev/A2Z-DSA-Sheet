// Question: Write a C++ program to display the day of the week based on the number entered by the user.
// The program should:
// 1. Prompt the user to input a number between 1 and 7, representing the day of the week.
// 2. Use a switch-case structure to output the corresponding day:
//    - 1 for Monday, 2 for Tuesday, and so on until 7 for Sunday.
// 3. If the input is not between 1 and 7, display an error message: "Wrong Choice made!".
// 4. Use `break` statements to ensure only the matched case is executed.

#include<bits/stdc++.h> // Includes all standard libraries
using namespace std;    // Using the standard namespace to avoid writing 'std::' repeatedly

int main() {
    int day; // Declare an integer variable to store the user's input

    cout << "Enter the number of the day: "; // Prompt the user to input a number
    cin >> day; // Take input from the user and store it in the 'day' variable

    switch (day) { 
        case 1: // If the input is 1
            cout << "Monday"; // Print "Monday"
            break; // Exit the switch block

        case 2: // If the input is 2
            cout << "Tuesday"; // Print "Tuesday"
            break; // Exit the switch block

        case 3: // If the input is 3
            cout << "Wednesday"; // Print "Wednesday"
            break; // Exit the switch block

        case 4: // If the input is 4
            cout << "Thursday"; // Print "Thursday"
            break; // Exit the switch block

        case 5: // If the input is 5
            cout << "Friday"; // Print "Friday"
            break; // Exit the switch block

        case 6: // If the input is 6
            cout << "Saturday"; // Print "Saturday"
            break; // Exit the switch block

        case 7: // If the input is 7
            cout << "Sunday"; // Print "Sunday"
            break; // Exit the switch block

        default: // If the input is not between 1 and 7
            cout << "Wrong Choice made!"; // Print an error message
    }

    cout << " Checks completed"; // Indicate that the program has finished execution

    return 0; // Indicate successful program termination
}

// Note: The `break` statement prevents the program from executing subsequent cases once a match is found.
