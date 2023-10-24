// CharQueue.h
// CS 110C Data Structures & Algorithm: C++ 71517-831
// Assignment 8 - Palindrome
// 🌻 Mei Okubo 🌻

#ifndef CHAR_QUEUE_H
#define CHAR_QUEUE_H

#include "Constants.h"
#include "CharStack.h"

const int MAX_QUEUE = MAX_SIZE; // definition in Constants.h

class CharQueue {
private:
    char arr[MAX_QUEUE + 1]; // array for the circular queue
    int front, back;         // pointers for front and back of the circular queue

public:
    CharQueue();
    void enqueue(char c);         // add an element to the end
    char dequeue();               // remove and return the front element
    bool isEmpty();               // check if queue is empty
    bool isFull();                // check if queue is full
};

#endif // CHAR_QUEUE_H
