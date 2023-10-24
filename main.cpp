// main.cpp
// CS 110C Data Structures & Algorithm: C++ 71517-831
// Assignment 8 - Palindrome
// 🌻 Mei Okubo 🌻

#include "CharQueue.h"
#include "CharStack.h"
#include <iostream>

using namespace std;

bool isPalindrome(string S);  // Assuming you've implemented this elsewhere

int main() {
    string str;
    while (true) {
        cout << "Enter a string to check if it's a palindrome. " << endl;
        cout << "(To quit, press Ctrl+D)" << endl;
        cout << "> ";
        char ch;
        str.clear(); // Clear the previous input
        while (cin.get(ch) && ch != '\n') { // Read a character at a time until Enter is pressed
            str += ch;
        }

        if (cin.eof()) {
        // If getline returns false, it means Ctrl+D was pressed (EOF)
            break;
        }

        if(isPalindrome(str)) { // Here we pass the char array instead of string
            cout << "Yep, that's a palindrome!" << endl;
        } else {
            cout << "Nah, not a palindrome." << endl;
        }
    }

    cout << "Bye Bye 🤟" << endl;
    return 0;
}