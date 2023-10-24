#include "CharQueue.h"

// extern const int MAX_QUEUE;

// CharQueue::CharQueue() {
//     // Constructor is empty as CharStack's default constructor will automatically initialize both stacks.
// }
CharQueue::CharQueue() {
    front = 0;
    back = 0;
}
// void CharQueue::enqueue(char c) {
//     // Pushing the element onto stackIn.
//     stackIn.push(x);
// }

void CharQueue::enqueue(char c) {
    if (!isFull()) {
        // arr[back] = c;
        // back = (back + 1) % QUEUE_SIZE;
        back = (back + 1) % (MAX_QUEUE + 1); // Update to use MAX_QUEUE
        arr[back] = c;
    } else {
        cout << "Queue is full!" << endl;
    }
}


// char CharQueue::dequeue() {
//     // If stackOut is empty, transfer all elements from stackIn to stackOut.
//     if (stackOut.isEmpty()) {
//         while (!stackIn.isEmpty()) {
//             stackOut.push(stackIn.pop());
//         }
//     }

//     // Ensure we aren't trying to dequeue from an empty queue.
//     if (stackOut.isEmpty()) {
//         cout << "Queue is empty!" << endl;
//         return '\0';  // Return a default char as a fallback.
//     }

//     // Pop the front element (top of stackOut).
//     return stackOut.pop();
// }
char CharQueue::dequeue() {
    if (!isEmpty()) {
        char toReturn = arr[front];
        // front = (front + 1) % QUEUE_SIZE;
        front = (front + 1) % (MAX_QUEUE + 1); // Update to use MAX_QUEUE
        // return toReturn;
        return arr[front];
    } else {
        cout << "Queue is empty!" << endl;
        return '\0';  // Return a default char as a fallback
    }
}

bool CharQueue::isEmpty() {
    // Queue is empty only if both stacks are empty.
    // return stackIn.isEmpty() && stackOut.isEmpty();
    return back == front;
}

bool CharQueue::isFull() {
    // As we're not strictly enforcing a limit for the queue (since we've two stacks and elements can shuffle between them), 
    // you can make a choice here. For simplicity, let's say queue is full if the combined size of both stacks is >= MAX_QUEUE.
    // return (stackIn.size() + stackOut.size()) >= MAX_QUEUE;
    // return (back + 1) % QUEUE_SIZE == front;
     return (back + 1) % (MAX_QUEUE + 1) == front; // Update to use MAX_QUEUE
}
