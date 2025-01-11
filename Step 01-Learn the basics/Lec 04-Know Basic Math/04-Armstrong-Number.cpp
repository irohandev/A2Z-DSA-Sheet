#include <iostream> // Header file for input and output
using namespace std;

int main() {
    int n, original, sum = 0; // Declare variables:
                              // n: input number
                              // original: store the original number
                              // sum: store the sum of cubes of digits

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n; // Read the input number from the user

    original = n; // Store the original number for comparison later

    // Loop to process each digit of the number
    while (n > 0) {
        int digit = n % 10;          // Extract the last digit of the number
        sum += digit * digit * digit; // Cube the digit and add it to the sum
        n = n / 10;                  // Remove the last digit from the number
    }

    // Check if the sum of cubes of digits equals the original number
    if (sum == original) {
        cout << original << " is an Armstrong number!" << endl; // Output if true
    } else {
        cout << original << " is not an Armstrong number!" << endl; // Output if false
    }

    return 0; // Indicate successful program execution
}
