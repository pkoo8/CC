# Data Structures

## Linked Lists 

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.
- Like arrays, Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.

Limitation of Arrays:
1. Size is Fixed.
2. Inserting a new element is difficult.
Advantage over Arrays:
1. Dynamic Size.
2. Ease of insertion/deletion.
Drawbacks:
1. Random access is not allowed.
2. Extra memory space for a pointer is required.
3. Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.

Representation:
A linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head is NULL.
Each node in a list consists of at least two parts:
1) data
2) Pointer (Or Reference) to the next node

- [Sample Code](/linkedlists)