# In the toolkit

## Components

### Hash table

*Hash Table (chained)* Contains a string hashing function. Collisions are stored at the same index as a linked list of values. Uses the Linked List from the next example.

### Double Linked List

*Double Linked List:* Each node points to the next and previous link in the chain.
    
```
             |----------------------|          |----------------------|
             | std::string key      |          | std::string key      |
             | <T> value            |          | <T> value            |
  / <--------- node<T>* prev        | <--------- node<T>* prev        |
             | node<T>* next   --------------> | node<T>* next ----------------> /
             |----------------------|          |----------------------|
```

### Binary search

*Binary search algorithm*

### Bit flags

*Bit flags operations* set and unset flag bitwise operations, as a header file only implementation

### Binary Tree Traversal

Preorder, Inorder, and Postorder binary tree traversal methods are illustrated.

## Working with the project

required:

- `CMake 2.6+` 
- `C++11`

### Tests

Run in the project root:

```
cmake .
make
ctest .
```

Each item in the toolkit has a `src` source directory and a `test` directory with tests.

----

Tomas
