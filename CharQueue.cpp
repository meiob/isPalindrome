#include "CharQueue.h"

extern const int MAX_QUEUE;

CharQueue::CharQueue() {
    // Constructor is empty as CharStack's default constructor will automatically initialize both stacks.
}

void CharQueue::enqueue(char x) {
    // Pushing the element onto stackIn.
    stackIn.push(x);
}

char CharQueue::dequeue() {
    // If stackOut is empty, transfer all elements from stackIn to stackOut.
    if (stackOut.isEmpty()) {
        while (!stackIn.isEmpty()) {
            stackOut.push(stackIn.pop());
        }
    }

    // Ensure we aren't trying to dequeue from an empty queue.
    if (stackOut.isEmpty()) {
        cout << "Queue is empty!" << endl;
        return '\0';  // Return a default char as a fallback.
    }

    // Pop the front element (top of stackOut).
    return stackOut.pop();
}

bool CharQueue::isEmpty() {
    // Queue is empty only if both stacks are empty.
    return stackIn.isEmpty() && stackOut.isEmpty();
}

bool CharQueue::isFull() {
    // As we're not strictly enforcing a limit for the queue (since we've two stacks and elements can shuffle between them), 
    // you can make a choice here. For simplicity, let's say queue is full if the combined size of both stacks is >= MAX_QUEUE.
    return (stackIn.size() + stackOut.size()) >= MAX_QUEUE;
}
