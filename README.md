# In the toolkit

"[Y]ou must read and write computer programs -- many of them... The programmer must seek both perfection of part and adequacy of collection... Since large programs grow from small ones, it is crucial that we develop an arsenal of standard program structures of whose correctness we have become sure--we call them idioms--and learn to combine them into larger structures using organizational techniques of proven value" (Abelson, Sussman and Sussman, 1996, pp. xiii-xiv).



## Components

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

### Hash table

The hash table is an array of linked lists. Because each link in the linked list can store a key-value pair, this is what the hash table can also store.

The key is always a string and the type of the value can be templated. A hashing algorithm is used to compute the index of the list in which a key-value pair is stored.

### Binary search

*Binary search algorithm*

### Bit flags

*Bit flags operations* set and unset flag bitwise operations, as a header file only implementation

### Binary Tree Traversal

Preorder, Inorder, and Postorder binary tree traversal methods are illustrated.

### Red-Black Tree

An implementation of a balanced search tree. 

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

Harold Abelson , Gerald Jay Sussman, Julie Sussman. 1996. *Structure and Interpretation of Computer Programs - 2nd Edition*
