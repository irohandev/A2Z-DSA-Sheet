#include <bits/stdc++.h>
using namespace std;

// Function to generate and print the pattern
void pattern20(int n)
{
    // Initializing the number of spaces between the star patterns.
    int spaces = 2 * n - 2;

    // Outer loop to iterate through each row.
    // The total number of rows is 2 * n - 1.
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // Determine the number of stars to print in the current row.
        int stars = i;

        // After reaching the middle row, the number of stars decreases.
        if (i > n)
            stars = 2 * n - i;

        // Print the stars on the left side of the row.
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // Print the spaces between the left and right star patterns.
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        // Print the stars on the right side of the row.
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // Move to the next row after printing the current row.
        cout << endl;

        // Adjust the number of spaces for the next row.
        // Before the middle row (i < n), spaces decrease by 2 in each iteration.
        // After the middle row (i >= n), spaces increase by 2 in each iteration.
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}

int main()
{
    // Prompt the user to enter the value of n.
    cout << "Enter the value of n: ";
    int n;
    cin >> n;

    // Call the function to generate and print the pattern.
    pattern20(n);

    return 0;
}

/*
Example Output for n = 5:

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

Explanation:
- The pattern consists of 2 * n - 1 rows.
- The first n rows have increasing stars on both sides with decreasing spaces.
- The middle row (n-th row) has the maximum stars and no spaces.
- The remaining rows have decreasing stars on both sides with increasing spaces.
*/
