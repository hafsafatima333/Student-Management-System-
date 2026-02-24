# Student Management System (C++ with Qt)

The backend of this Student Management System is implemented in **C++** using a **Linked List data structure**. It is responsible for storing, managing, searching, and manipulating student records dynamically during program execution. No external database is used instead, all data operations are handled in memory using efficient data structure logic.

## Core Data Structure

- **Singly Linked List**
- Each node represents a student record
- Nodes are dynamically allocated using pointers
- Allows efficient insertion, deletion, and traversal

### Student Node contains:
- Roll Number
- Student Name
- CGPA
- Attendance
- Pointer to next student node

---

## Backend Functionalities

### Add Student
- Creates a new student node dynamically
- Inserts the node into the linked list
- Ensures no duplicate roll numbers (if implemented)

### Display Students
- Traverses the linked list from head to end
- Displays all student records
- Shows roll number, name, CGPA, and attendance

### Update Student
- Searches student by roll number
- Updates student details such as:
  - Name
  - CGPA

### Delete Student
- Searches for the student node
- Removes the node from the linked list
- Frees allocated memory properly

### Search Student by Roll Number
- Traverses linked list
- Compares roll number
- Displays matching student record

### Search Student by Name
- Traverses linked list
- Matches student name
- Displays matching results

### Search Student by CGPA
- Traverses linked list
- Finds students with matching CGPA
- Displays matching records

### Sort Students by Roll Number
- Sorts linked list in ascending order
- Uses comparison-based sorting logic
- Rearranges node links instead of copying data

### Mark Attendance
- Searches student by roll number
- Updates attendance value
- Stores attendance in student node

---

## Memory Management

- Uses dynamic memory allocation (`new` and `delete`)
- Prevents memory leaks by properly deleting nodes
- Efficient memory usage without database overhead

---

## Backend Characteristics

- Database-free system
- Fully implemented using Data Structures concepts
- Fast in-memory operations
- Pointer-based dynamic storage
- Suitable for small to medium datasets
- Educational implementation for learning DSA

---

## Algorithms Used

- Linked List Traversal — O(n)
- Insertion — O(n)
- Deletion — O(n)
- Search — O(n)
- Sorting — O(n²) (depending on implementation)

---

## Integration with Qt Frontend

- Qt GUI handles user interaction
- Backend handles all data processing
- Qt signals and slots connect frontend and backend logic
- Backend functions are called based on user actions

---

## Summary

This backend demonstrates practical implementation of:

- Linked Lists
- Dynamic Memory Allocation
- Searching Algorithms
- Sorting Algorithms
- CRUD Operations (Create, Read, Update, Delete)

It provides a complete student record management system without using any external database.
