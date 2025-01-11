#include <bits/stdc++.h>
using namespace std;

// Function to print the pattern
void print(int n)
{
     // Outer loop for number of rows (2*n-1 rows)
     for(int i = 0; i < 2*n - 1; i++){
         
         // Inner loop for number of columns (2*n-1 columns)
         for(int j = 0; j < 2*n - 1; j++){
             
             // Initialising the top, bottom, left, and right indices of a cell
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Taking the minimum of the four directions and subtracting it from n
             // This creates the pattern where the borders have 'n' and the values decrease inward
             cout << (n - min(min(top, bottom), min(left, right))) << " ";
         }
         
         // After each row is printed, move to the next row with a line break
         cout << endl;
     }
}


int main()
{   
    // Taking the value of n from the user
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    // Call the function to print the pattern
    print(n);

    return 0;
}

/*
Sample Input:
Enter the value of n: 5

Sample Output:
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

Explanation:
- The pattern starts with '5' at the borders and decreases as we move towards the center of the square.
- Each row and column contains values that decrease as we approach the center.
- The pattern forms concentric squares, each with smaller values, with '5' at the outermost border and decreasing inwards.
*/

