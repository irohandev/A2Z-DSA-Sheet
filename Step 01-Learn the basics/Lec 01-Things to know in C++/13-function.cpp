#include<bits/stdc++.h>
using namespace std;

// Functions:-
//    a. Functions are the set of code which performs something for you.
//       - Functions contain a block of code that performs a specific task. For example, we define a function to calculate the sum of two numbers.
//    b. Functions are used to modularize code.
//       - Functions help break down a large program into smaller, manageable pieces, making it easier to understand and maintain.
//    c. Functions are used to increase code readability.
//       - By organizing code into functions with descriptive names, it becomes more readable and easier to understand.
//    d. Functions are used to use the same code multiple times.
//       - Functions allow you to write a block of code once and reuse it as many times as needed, which improves efficiency and reduces redundancy.
//    e. void -> which does not return anything.
//       - A `void` function performs a task but does not return any value. It is often used when the result is printed or saved elsewhere, not returned.
//    f. return
//       - The `return` keyword is used to send a result back from a function to where it was called. It can return a value (e.g., `int`).
//    g. parameterized
//       - A function is parameterized when it accepts values (parameters) to work with, like taking two numbers to add them.
//    h. non-parameterized
//       - A function is non-parameterized when it does not take any input values.

// Example of void function
// void printNewName(string function){
//     cout << "Hey " << function << endl; // Prints a greeting with the provided name
// }

// int main(){
//     string name;
//     cin >> name; // Taking input from user for name
//     printNewName(name); // Calling the function to print greeting
//     return 0;
// }

// Take two numbers and print their sum
// int main(){
//     int num1, num2;
//     cin >> num1 >> num2; // Taking two integer inputs
//     int num3 = num1 + num2; // Adding the two numbers
//     cout << num3; // Printing the sum
//     return 0;
// }

// Another way to print the sum of two numbers using a function
// The 'sum' function takes two parameters, adds them, and returns the result
// int sum(int num1, int num2){
//     int num3 = num1 + num2; // Calculate sum
//     return num3; // Return the sum to the calling code
// }

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2; // Taking two integer inputs
//     int res = sum(num1, num2); // Calling sum() to calculate the result
//     cout << res; // Printing the result
//     return 0;
// }

// Max, Min function example
// This function returns the maximum of two numbers
// Incomplete: We need to handle the case for when num2 is greater than num1
int maxx(int num1, int num2){
    if(num1 >= num2){
        return num1; // If num1 is greater than or equal to num2, return num1
    }
    else{
        return num2;
    }
}

// Main function to call the maxx function and display the result
int main(){
    int num1, num2;
    cin >> num1 >> num2; // Taking two integer inputs
    int maximum = maxx(num1, num2); // Calling maxx() to find the maximum value
    cout << maximum; // Printing the maximum value
    return 0;
}
