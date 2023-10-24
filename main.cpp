// main.cpp
// CS 110C Data Structures & Algorithm: C++ 71517-831
// Assignment 8 - Palindrome
// 🌻 Mei Okubo 🌻
// Note: Sample output is in README.md for cliarity.

#include "CharQueue.h"
#include "CharStack.h"
#include "is_palindrome.h"
#include <iostream>

using namespace std;

int main() {
    string str;

    cout << "Enter a string to check if it's a palindrome. " << endl;
    cout << "(To quit, press Ctrl+D)" << endl;
    
    while (true) {
         // prompt user for string input
        cout << "> ";
        char ch;
        str.clear(); // Clear the previous input. 👍🏽

        // read a character at a time until Enter is pressed
        while (cin.get(ch) && ch != '\n') {
            str += ch;
        }

        // watch for EOF (Ctrl+D)
        if (cin.eof()) {
            break;
        }

        // test str for palindrome and print result
        if(isPalindrome(str)) {
            cout << "Yep, that's a palindrome!" << endl;
        } else {
            cout << "Nah, not a palindrome." << endl;
        }
    }

    // exit the program
    cout << "Bye Bye 🤟" << endl;
    return 0;
}