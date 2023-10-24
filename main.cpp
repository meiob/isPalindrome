// main.cpp
// CS 110C Data Structures & Algorithm: C++ 71517-831
// Assignment 8 - Palindrome
// 🌻 Mei Okubo 🌻
//
// Palindrome Check using CharStack and CharQueue:
//
// Process:
// 1. Initialize instances of CharStack and CharQueue.
// 2. Loop through the string S. For each character:
//    - Push onto the CharStack.
//    - Enqueue onto the CharQueue.
// 3. Compare characters:
//    - Pop a character from CharStack.
//    - Dequeue a character from CharQueue.
//    - If they're ever not equal, S isn't a palindrome.
//
// CharQueue Implementation Highlights:
// - Doesn't rely on item count or boolean isFull to track its fullness.
// - Utilizes array size MAX_QUEUE from Constants.h, ensuring clarity and ease of modification.
//
// Pointer Init:
// - Front and back pointers are initialized to 0.
//
// Enqueue:
// 1. Before enqueuing, checks if full via isFull().
// 2. Increments back pointer with modulo for wrapping.
// 3. Value is stored at the incremented back pointer.
//
// Dequeue:
// 1. Before dequeuing, checks if empty via isEmpty().
// 2. Increments front pointer with modulo.
// 3. Returns value from the incremented front position.
//
// Full Queue Check:
// - Queue is full if (back + 1) % MAX_QUEUE is equal to front.
//
// Empty Queue Check:
// - Queue is empty if back is equal to front.

#include "CharQueue.h"
#include "CharStack.h"
#include <iostream>
#include <cstring> // for strcpy()

using namespace std;

bool isPalindrome(string S);  // Assuming you've implemented this elsewhere

int main() {
    string str;
    cout << "Enter a string to check if it's a palindrome: ";

    // Instead of cin, we'll use getline to handle spaces as well
    getline(cin, str);

    // Create a character array of sufficient size (+1 for the null terminator)
    char charArray[str.size() + 1];

    // Copy the string to the character array
    strcpy(charArray, str.c_str());

    if(isPalindrome(charArray)) { // Here we pass the char array instead of string
        cout << "Yep, that's a palindrome!" << endl;
    } else {
        cout << "Nah, not a palindrome." << endl;
    }

    return 0;
}