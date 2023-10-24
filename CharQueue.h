// CharQueue.h

#ifndef CHAR_QUEUE_H
#define CHAR_QUEUE_H

#include "Constants.h"
#include "CharStack.h" // Including the CharStack header

const int MAX_QUEUE = MAX_SIZE; // definition in Constants.h

class CharQueue {
private:
    CharStack stackIn, stackOut;  // Two stacks to implement the queue

public:
    CharQueue();                  // Constructor
    void enqueue(char x);         // Add an element to the end
    char dequeue();               // Remove and return the front element
    bool isEmpty();               // Check if queue is empty
    bool isFull();                // Check if queue is full
};

#endif // CHAR_QUEUE_H
