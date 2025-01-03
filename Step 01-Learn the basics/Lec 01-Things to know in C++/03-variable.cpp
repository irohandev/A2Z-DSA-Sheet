#include<iostream>   // Including the input/output stream library for handling input/output operations
using namespace std; // Using the standard namespace to avoid writing 'std::' before standard functions

int main(){
    // int & long for integer type
    int x = 3; // Declare an integer variable 'x' and initialize it with the value 3
    long y = 234567; // Declare a long integer variable 'y' and initialize it with the value 234567

    cout << x << y; // Print the values of 'x' and 'y' to the console. This will output "3234567" (without spaces).

    // float & double for int and decimal both 
    float a = 4.5; // Declare a float variable 'a' and initialize it with the value 4.5
    double b = 3.56789; // Declare a double variable 'b' and initialize it with the value 3.56789 (more precise than float)

    cout << a << b; // Print the values of 'a' and 'b' to the console. The output will be "4.53.56789".

    // string
    string s1; // Declare a string variable 's1' to store a sequence of characters
    cin >> s1; // Take input for the string 's1'. However, this will stop at the first space, meaning if the user types "Hey Rohan", it will only store "Hey"
    cout << s1; // Print the value of 's1' to the console. The output will be just "Hey", because cin stops reading at spaces.
    
    string str; // Declare another string variable 'str'
    getline(cin, str); // Use the getline function to read a full line, including spaces, until the Enter key is pressed.
    cout << str; // Print the value of 'str'. It will show the entire input entered by the user, including spaces.

    // char 
    char ch = 'r'; // Declare a character variable 'ch' and initialize it with the character 'r'
    cout << ch; // Print the character 'r' to the console. The output will be "r".

    return 0; // Return 0, indicating that the program executed successfully
}
