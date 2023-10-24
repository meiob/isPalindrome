// CharStack.h
// CS 110C Data Structures & Algorithm: C++ 71517-831
// Assignment 8 - Palindrome
// 🌻 Mei Okubo 🌻

#ifndef CHARSTACK_H
#define CHARSTACK_H
#include "Constants.h"

#include <iostream>
using namespace std;

const int MAX_STACK = MAX_SIZE; // Definition in Constatnts.h

class CharStack {
private:
    char arr[MAX_STACK];
    int top;

public:
    CharStack();  // Constructor
    void push(char c);  // Function to push a character onto the stack
    char pop();  // Function to pop a character from the stack
    bool isEmpty() const;  // Function to check if the stack is empty
    bool isFull() const;  // Function to check if the stack is full
    char peek() const;  // Function to get the top character of the stack without popping
    int size() const;   // Function to get the number of elements in the stack
};

#endif // CHARSTACK_H