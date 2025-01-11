#include<bits/stdc++.h> // Includes all standard library headers.
using namespace std;    // Allows using standard library objects without prefixing std::

// Function to count the number of digits in an integer using an iterative method.
int count_digit(int n) {
    int count = 0; // Initialize the digit count to 0.

    // Loop to count the digits of the number by repeatedly removing the last digit.
    while (n > 0) {
        int last_digit = n % 10; // Extract the last digit of the number (not used here).
        count += 1;             // Increment the count for each digit.
        n = n / 10;             // Remove the last digit from the number.
    }

    // Output the total number of digits.
    cout << "The number of digits in n : " << count << endl;

    return 0; // Problem: The function is returning 0 instead of the count. 
}

// Another method to count the digits of a number using logarithmic properties.
int count_digit2(int n) {
    // Formula to calculate the number of digits: floor(log10(n)) + 1
    int count = (int)(log10(n) + 1); // Logarithmic calculation for digit count.

    return count; // Return the calculated digit count.
}

int main() {
    int n; // Variable to store the input number.

    // Prompt the user to enter a number.
    cout << "Enter the value of n: ";
    cin >> n; // Take input from the user.

    // Call the first method to count digits (iterative) and display its output.
    count_digit(n);

    // Call the second method to count digits (logarithmic) but do nothing with the result.
    count_digit2(n);

    return 0; // Indicate successful program execution.
}
