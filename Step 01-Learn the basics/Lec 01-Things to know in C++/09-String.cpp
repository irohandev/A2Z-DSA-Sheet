#include<bits/stdc++.h> // Includes all standard C++ libraries.
using namespace std;

int main (){
    // Declare and initialize a string with the value "RohanDevSingh".
    string r = "RohanDevSingh";

    // Get the length of the string using the size() function and store it in the variable 'len'.
    int len = r.size();

    // Modify the last character of the string. The last character is at index 'len-1'.
    r[len-1] = 'g'; // Replace the last character with 'g'.

    // Print the last character of the string to confirm the change.
    cout << r[len-1] << endl;

    // Print the entire string after modification.
    cout << r;

    return 0;
}
