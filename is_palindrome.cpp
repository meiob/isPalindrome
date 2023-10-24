// is_palindrome.cpp
// CS 110C Data Structures & Algorithm: C++ 71517-831
// Assignment 8 - Palindrome
// 🌻 Mei Okubo 🌻

#include "CharQueue.h"
#include "CharStack.h"
#include "is_palindrome.h"

bool isPalindrome(std::string S) {
    CharStack s;
    CharQueue q;

    for(char c : S) {
        // Before pushing to the stack or enqueueing to the queue, 
        // ensure they're not full.
        if (!s.isFull()) {
            s.push(c);
        }

        if (!q.isFull()) {
            q.enqueue(c);
        }
    }

    while(!s.isEmpty() && !q.isEmpty()) {
        if(s.pop() != q.dequeue()) {
            return false; // Not a palindrome
        }
    }

    return true; // It's a palindrome
}
