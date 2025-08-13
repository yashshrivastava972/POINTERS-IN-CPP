# Aim: To study and implement C++Pointer basics.

## Tool: VS CODE.

## Theory: 

### What is a Pointer?
A pointer is a variable that stores the memory address of another variable.

•	Pointers are symbolic representations of addresses. 
•	They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. 
•	Iterating over elements in arrays or other data structures is one of the main use of pointers. 
•	The address of the variable you’re working with is assigned to the pointer variable that points to the same data type (such as an int or string).

 Key Concepts
- Declaration: type* ptr; — declares a pointer to a specific type.
- Address-of Operator (&): Gets the address of a variable.
- Dereference Operator (*): Accesses the value at the pointer's address.
- Null Pointer: A pointer that points to nothing (nullptr in modern C++).
- Pointer Arithmetic: You can increment/decrement pointers to traverse arrays.

### Advantages of Using Pointers in C++

1. Dynamic Memory Management
- Enables allocation and deallocation of memory at runtime using new and delete.
- Useful for creating flexible data structures like linked lists, trees, and graphs.

 2. Efficient Array and String Handling
- Pointers allow direct manipulation of arrays and strings.
- Enables faster traversal and modification using pointer arithmetic.

 3. Function Arguments: Pass-by-Reference
- Allows functions to modify actual variables by passing their addresses.
- Saves memory and improves performance for large data structures.

  4. Pointer to Functions
- Enables dynamic behavior and callbacks.
- Useful in implementing polymorphism and event-driven systems.

5. Building Complex Data Structures
- Essential for implementing linked lists, trees, stacks, queues, graphs, etc.
- Provides flexibility in memory layout and structure manipulation.

  6. Low-Level System Access
- Pointers allow direct access to memory and hardware registers.
- Crucial in embedded systems and operating system development.

  7. Memory Efficiency
- Avoids copying large structures by passing pointers.
- Enables shared access to data without duplication.

## Algorithms:

Step-by-Step Algorithm For 9A - Arithmetic Using Pointers:

- Start
- Declare an integer variable a and initialize it.
- Declare an integer pointer aptr and assign it the address of a.
- Display the address stored in aptr before incrementing.
- Increment aptr using aptr++.
- Display the address stored in aptr after incrementing.
- Repeat steps 2–6 for:
- A float variable b and pointer bptr
- A double variable c and pointer cptr
- A bool variable d and pointer dptr
- Observe how the address changes based on the data type size.
- End.

Step-by-Step Algorithm For 9B - Addition and Subtraction Using Pointers:

- Start
- Declare two integer variables a and b
- Initialize a ← 20, b ← 25
- Declare two integer pointers aptr and bptr
- Assign the address of a to aptr → aptr ← &a
- Assign the address of b to bptr → bptr ← &b
- Dereference both pointers to access values:
    *aptr gives value of a
    *bptr gives value of b
- Compute sum: sum ← *aptr + *bptr
- Display sum
- Compute difference: diff ← *aptr - *bptr
- Display diff
- End.

Step-by-Step Algorithm For 9C - Reverse Array Using Pointer:

- Start
- Declare an integer variable n
- Prompt the user to enter the number of elements
- Read value into n
- Declare an integer array arr of size n
- Prompt the user to enter n elements
- Read each element into arr[i] using a loop from i = 0 to n - 1
- Initialize a pointer ptr to point to the last element of the array → ptr = arr + n - 1
- Loop from i = 0 to n - 1:
   Print the value pointed to by ptr → *ptr
   Decrement the pointer → ptr--
- End.

Step-by-Step Algorithm For 9D - Print String Using Pointer:

- Start
- Declare a character array str and initialize it with a string (e.g., "YASH SHRIVASTAVA")
- Declare a character pointer ptr
- Assign the address of the first character of str to ptr → ptr = str
- Display "String: " as a label
- Repeat while *ptr ≠ '\0' (null terminator):
    Print the character pointed to by ptr → *ptr
    Increment the pointer → ptr++
- End.

  ## Conclusion:
Pointers in C++ allow direct access and manipulation of memory.
They enable efficient data traversal, arithmetic operations, and string handling.
Using pointer arithmetic, arrays and strings can be navigated flexibly.
Mastering pointer basics lays the foundation for advanced C++ programming.
