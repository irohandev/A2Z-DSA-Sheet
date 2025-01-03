#include<bits/stdc++.h>
using namespace std;

// Pass by value
// When a variable is passed by value, a copy of the variable is passed to the function.
// Changes made inside the function do not affect the original variable.

    // void doSomething(int num){
    //     cout << num << endl; // Prints the original value of 'num'
    //     num += 5; // Adds 5 to 'num' inside the function
    //     cout << num << endl; // Prints the modified value of 'num'
    //     num += 5; // Adds another 5 to 'num' inside the function
    //     cout << num << endl; // Prints the further modified value of 'num'
    // }

    // int main(){
    //     int num = 10; // Initial value of 'num'
    //     doSomething(num); // Passes 'num' to the function by value (a copy is passed)
    //     cout << num << endl; // Prints the original value of 'num' which remains unchanged (10)
    //     return 0;
    // }

    // --- Here, we see that 'num' will be printed as 10 in main, even after modification inside the function
    //     because the changes inside the function only affect the copy, not the original variable.


// Pass by reference
// In this case, the actual memory address of the variable is passed to the function.
// Changes made inside the function will directly affect the original variable.

    // void doOtherThings(int &num){
    //     cout << num << endl; // Prints the original value of 'num'
    //     num += 5; // Adds 5 to 'num' inside the function
    //     cout << num << endl; // Prints the modified value of 'num'
    //     num += 5; // Adds another 5 to 'num' inside the function
    //     cout << num << endl; // Prints the further modified value of 'num'
    // }

    // int main(){
    //     int num = 10; // Initial value of 'num'
    //     doOtherThings(num); // Passes 'num' by reference (the original variable is passed)
    //     cout << num << endl; // Prints the modified value of 'num', which changes because of pass by reference
    //     return 0;
    // }

    // --- Here, the value of 'num' in the main function will be modified (20 after two increments of 5)
    //     because the changes inside the function affect the original variable due to pass by reference.


// Pass by reference, looping and array all in one
// Arrays are always passed by reference, meaning the array elements are modified directly.
// This is a difference between arrays and other data structures like vectors, maps, or lists.

    void someArray(int arr[], int num){
        arr[0] += 100; // Modifies the first element of the array directly
        cout << "Value inside function: " << arr[0] << endl; // Prints modified value of the first element
    }

    int main(){
        int num = 5; // Defines the size of the array
        int arr[num]; // Declares an array of size 'num'

        // Input elements for the array
        for(int i = 0; i < num; i = i + 1){
            cin >> arr[i]; // User inputs values for the array
        }

        // Prints the values of the array before modification
        for(int i = 0; i < 5; i = i + 1){
            cout << arr[i] << endl; // Prints each element of the array
        }

        someArray(arr, num); // Passes the array to the function (passed by reference)

        // Prints the value of the first element of the array after modification
        cout << "Value inside int main: " << arr[0] << endl; // The first element of the array is modified
        return 0;
    }

    // --- Here, the array 'arr' is passed by reference, so any modification made inside the function
    //     (like adding 100 to arr[0]) will directly affect the array in the main function.
    //     You will see the updated value printed in both the function and the main function.
