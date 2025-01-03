// Question: Write a C++ program to determine the grade of a student based on their marks.
// The program should:
// 1. Prompt the user to enter their marks.
// 2. Assign a grade based on the following conditions:
//    - Marks <= 25: Grade F
//    - Marks between 26 and 44: Grade E
//    - Marks between 45 and 49: Grade D
//    - Marks between 50 and 59: Grade C
//    - Marks between 60 and 79: Grade B
//    - Marks between 80 and 100: Grade A
// 3. Display the appropriate grade based on the entered marks.

#include<bits/stdc++.h> // Includes all standard libraries for convenience
using namespace std;    // Using the standard namespace to avoid writing 'std::' repeatedly

int main () {
    int marks; // Declare an integer variable to store the student's marks

    cout << "Enter your marks: "; // Prompt the user to enter their marks
    cin >> marks; // Take input from the user and store it in the 'marks' variable

    if (marks <= 25){ // Check if marks are less than or equal to 25
        cout << "F"; // Assign grade F
    }
    else if (marks >= 26 && marks <= 44){ // Check if marks are between 26 and 44
        cout << "E"; // Assign grade E
    }
    else if (marks >= 45 && marks <= 49){ // Check if marks are between 45 and 49
        cout << "D"; // Assign grade D
    }
    else if (marks >= 50 && marks <= 59){ // Check if marks are between 50 and 59
        cout << "C"; // Assign grade C
    }
    else if (marks >= 60 && marks <= 79){ // Check if marks are between 60 and 79
        cout << "B"; // Assign grade B
    }
    else if (marks >= 80 && marks <= 100){ // Check if marks are between 80 and 100
        cout << "A"; // Assign grade A
    }

    return 0; // Indicate successful program termination
}
