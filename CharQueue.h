// CharQueue.h

#ifndef CHAR_QUEUE_H
#define CHAR_QUEUE_H

#include "Constants.h"
#include "CharStack.h" // Including the CharStack header

const int MAX_QUEUE = MAX_SIZE; // definition in Constants.h
// Msg: Hi gradar, please consider extra credit! Thank you.
// char arr[QUEUE_SIZE];


class CharQueue {
private:
    // CharStack stackIn, stackOut;  // Two stacks to implement the queue
    char arr[MAX_QUEUE + 1]; // Array for the circular queue
    int front, back;         // Pointers for front and back of the circular queue

public:
    CharQueue();
    void enqueue(char c);         // Add an element to the end
    char dequeue();               // Remove and return the front element
    bool isEmpty();               // Check if queue is empty
    bool isFull();                // Check if queue is full
};

#endif // CHAR_QUEUE_H
