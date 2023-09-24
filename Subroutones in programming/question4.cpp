/*
Implement a subroutine program to check if a given string is a palindrome or not.
*/
#include <iostream>
#include <string>
using namespace std;

void RA2211003010002_Palindrome_checker(string RA2211003010002_str) {
    string RA2211003010002_reversed = "";
    for (int i = RA2211003010002_str.length() - 1; i >= 0; i--) {
        RA2211003010002_reversed += RA2211003010002_str[i];
    }
    
    if (RA2211003010002_str == RA2211003010002_reversed) {
        cout << "It is Palindrome." << endl;
    } else {
        cout << "It is not Palindrome." << endl;
    }
}

int main() {
    string RA2211003010002_str;
    cout << "Enter a String to check whether it is a palindrome or not: ";
    cin >> RA2211003010002_str;
    RA2211003010002_Palindrome_checker(RA2211003010002_str);
}