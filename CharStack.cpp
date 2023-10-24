// CharStack.cpp
// CS 110C Data Structures & Algorithm: C++ 71517-831
// Assignment 8 - Palindrome
// 🌻 Mei Okubo 🌻

#include "CharStack.h"
#include <iostream>
using namespace std;

// initializes the top index to -1, meaning the stack is empty.
CharStack::CharStack() : top(-1) {}

// adds a char to the top of the stack. Checks for overflow first.
void CharStack::push(char c) {
    if (!isFull()) {
        arr[++top] = c;
    } else {
        cout << "Stack overflow!" << endl;
    }
}

// removes and returns the char from the top of the stack. Checks for underflow.
char CharStack::pop() {
    if (!isEmpty()) {
        return arr[top--];
    } else {
        cout << "Stack underflow!" << endl;
        return '\0';
    }
}

// checks if the stack is empty (returns true if top is -1).
bool CharStack::isEmpty() const {
    return top == -1;
}

// checks if the stack is full (returns true if top is at its max value).
bool CharStack::isFull() const {
    return top == MAX_STACK - 1;
}

// looks at the char on the top of the stack without removing it. If the stack's empty, it'll say so.
char CharStack::peek() const {
    if (!isEmpty()) {
        return arr[top];
    } else {
        cout << "Stack is empty!" << endl;
        return '\0';
    }
}

// returns the current size of the stack (one more than the top index, 'cause top starts at -1).
int CharStack::size() const {
    return top + 1;
}
