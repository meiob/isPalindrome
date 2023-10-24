#include "CharQueue.h"

CharQueue::CharQueue() {
    front = 0;
    back = 0;
}

void CharQueue::enqueue(char c) {
    if (!isFull()) {
        // arr[back] = c;
        // back = (back + 1) % QUEUE_SIZE;
        back = (back + 1) % (MAX_QUEUE + 1); // update to use MAX_QUEUE
        arr[back] = c;
    } else {
        cout << "Queue is full!" << endl;
    }
}


char CharQueue::dequeue() {
    if (!isEmpty()) {
        char toReturn = arr[front];
        // front = (front + 1) % QUEUE_SIZE;
        front = (front + 1) % (MAX_QUEUE + 1); // update to use MAX_QUEUE
        // return toReturn;
        return arr[front];
    } else {
        cout << "Queue is empty!" << endl;
        return '\0';  // return a default char as a fallback
    }
}

bool CharQueue::isEmpty() {
    // Queue is empty only if both stacks are empty.
    // return stackIn.isEmpty() && stackOut.isEmpty();
    return back == front;
}

bool CharQueue::isFull() {
    // queue is full if the combined size of both stacks is >= MAX_QUEUE.
    // return (stackIn.size() + stackOut.size()) >= MAX_QUEUE;
    // return (back + 1) % QUEUE_SIZE == front;
     return (back + 1) % (MAX_QUEUE + 1) == front; // update to use MAX_QUEUE
}
