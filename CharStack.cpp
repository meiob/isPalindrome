// CharStack.cpp
// CS 110C Data Structures & Algorithm: C++ 71517-831
// Assignment 8 - Palindrome
// 🌻 Mei Okubo 🌻

#include "CharStack.h"
#include <iostream>
using namespace std;

CharStack::CharStack() : top(-1) {}

void CharStack::push(char c) {
    if (!isFull()) {
        arr[++top] = c;
    } else {
        cout << "Stack overflow!" << endl;
    }
}

char CharStack::pop() {
    if (!isEmpty()) {
        return arr[top--];
    } else {
        cout << "Stack underflow!" << endl;
        return '\0';
    }
}

bool CharStack::isEmpty() const {
    return top == -1;
}

bool CharStack::isFull() const {
    return top == MAX_STACK - 1;
}

char CharStack::peek() const {
    if (!isEmpty()) {
        return arr[top];
    } else {
        cout << "Stack is empty!" << endl;
        return '\0';
    }
}

int CharStack::size() const {
    return top + 1;
}
