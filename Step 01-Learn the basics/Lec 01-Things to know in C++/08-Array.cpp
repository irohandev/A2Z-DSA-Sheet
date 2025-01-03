// Notes: 
// 1. Array is a collection of similar types of data elements. 
//    If one element is of type int, all elements in the array must also be int, 
//    as the array will then be of int type and cannot store elements of any other type.
// 2. Array elements are always stored in consecutive memory addresses.

#include<bits/stdc++.h>
using namespace std;

int main(){
    // 1-D array
    // Declaration of a 1-dimensional array with 4 integer elements.
    int arr[4];
    
    // Input values for the array from the user.
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    
    // Updating the value of the 4th element in the array.
    arr[3] = 5;
    
    // Output the value of the 4th element.
    cout << arr[3] << endl;

    // 2-D array
    // Declaration of a 2-dimensional array with 2 rows and 3 columns.
    int array[2][3];
    
    // Assigning a value to an element in the 2D array.
    // Note: The indices must be valid (0 <= row < 2, 0 <= column < 3 in this case).
    // Here, array[2][1] is invalid as the row index exceeds the defined range (0 and 1).
    // To fix this issue, we need to update it to a valid index like array[1][1].
    array[1][1] = 12;
    
    // Output the value of the element at a valid position.
    cout << array[1][1] << endl;

    return 0;
}
