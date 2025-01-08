#include<bits/stdc++.h>
using namespace std;


void print(int n){
    int start =1;

    for (int i =0; i<=n; i++){
        if(i%2==0){
            start = 1;
        }
        else{
            start = 0;
        }

        for( int j =0; j<=i; j++){
            cout << start;
            start = 1- start;
        }
        cout << endl;
    }
}

int main() {
    int n;
    // Input: Asking the user to enter the size of the pattern
    cout << "Enter the size of the pattern: ";
    cin >> n;  // User inputs the size of the pattern (height of the diamond)

    // Function call to print the pattern based on the input size
    print(n);

    return 0;  // End of the program
}