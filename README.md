# CS 110C Data Structures & Algorithm: C++ 71517-831
> _Assignment 8 - Palindrome_ \
> Palindrome Check using CharStack and CharQueue \
> __Author:__ 🌻 Mei Okubo 🌻

### Sample Output
```bash
Enter a string to check if it's a palindrome. 
(To quit, press Ctrl+D)
> 1234%^&^%4321
Yep, that's a palindrome!
> asdfdsa
Yep, that's a palindrome!
> 123dkfjah
Nah, not a palindrome.
> dsafdsa
Nah, not a palindrome.
> 1234%^&^%4321
Yep, that's a palindrome!
> dsafdsa
Nah, not a palindrome.
> asdsa
Yep, that's a palindrome!
> Bye Bye 🤟
```

## 🐝 Basic Requirements
- Make your own queue class that handles char data. - No templates needed.
- Implement either an array-based or link-based queue. Your choice.
- Create a function with a loop that:
- Pushes each char onto a stack
- Enqueues each char onto your queue
- Compare the chars from the stack and queue to check if the string is a palindrome.

## 🤟 Extra Credit
- Use an array-based implementation with no extra data members like a count or isFull.
- Sacrifice one array location to make front the index before the actual front.
- Full if front equals (back+1) % (MAX_QUEUE+1), empty if front equals back.

## 🔤 Implimentations
1. Initialize instances of CharStack and CharQueue.
2. Loop through the string S. For each character:
   - Push it onto the CharStack
   - Enqueue it onto the CharQueue
3. Compare characters:
   - Pop a character from CharStack
   - Dequeue a character from CharQueue
   - If they're ever not equal, S isn't a palindrome
CharQueue Implementation Highlights:
- Doesn't rely on item count or boolean isFull to track its fullness
- Utilizes the array size MAX_QUEUE from Constants.h, ensuring clarity and ease of modification
Pointer Initialization:
- Front and back pointers are initialized to 0
Enqueue Operation:
1. Before enqueuing, check if the queue is full using isFull()
2. Increment the back pointer using the modulo operation for wrapping
3. Store the value at the incremented back pointer
Dequeue Operation:
1. Before dequeuing, check if the queue is empty using isEmpty()
2. Increment the front pointer using the modulo operation
3. Return the value from the front position
Check if Queue is Full:
- The queue is full if (back + 1) % MAX_QUEUE is equal to front
Check if Queue is Empty:
- The queue is empty if back is equal to front

### ToDo
☑️ Basic Requirments \
☑️ Extra Credit


### Notes:
I mssied deadline due to recovery from illuness. \
After complete basic requirments and extra credit modification, \
I wrapped my code with loop while use input charcter(s) \
and exit with EOF (Ctrl+D) and tested alright. \
Before I had this loop, user needed to excute program each one entry at the time. \
Now user can continue check palindromes! 🎉

ℳ