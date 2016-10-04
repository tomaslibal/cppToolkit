# In the toolkit

"[Y]ou must read and write computer programs -- many of them... The programmer must seek both perfection of part and adequacy of collection... Since large programs grow from small ones, it is crucial that we develop an arsenal of standard program structures of whose correctness we have become sure--we call them idioms--and learn to combine them into larger structures using organizational techniques of proven value" (Abelson, Sussman and Sussman, 1996, pp. xiii-xiv).

As the repository name suggests, the reference code implementations are written in C++. For some components it will be necessary to use a C++11 compiler.

## Components

- Bit flags
- Binary search algorithm
- Binary tree traversal
- Quicksort
- Hash table
- Double linked list
- Red-black tree

### Bit flags

Bit flags operations implemented are *set* and *unset* flag bitwise operations. This is a header file only implementation.

### Binary search

A templated binary search function which can be parameterized with the type of the array in which the lookup is performed.

### Binary Tree Traversal

Preorder, Inorder, and Postorder binary tree traversal methods are illustrated.

### Quicksort

Quicksort (Partition exchange sort) is a divide-and-conquer search algorithm:

- split the array into smaller subarrays
- sort the subarrays
- merge the sorted subarrays

Part of the algorithm's performance comes from the strategy used to choose the pivot. This implementation uses the original pivot choosing strategy which is to initially set the beginning of a partition to be the pivot. The worst-case asymptotical running time n^2 is largely due to this choice for an input which is already sorted in an descending order.

### Hash table

The hash table is an array of linked lists. Because each link in the linked list stores a key-value pair, this is what the hash table can store.

The key is always a string and the type of the value can be parameterized by the template. A hashing algorithm is used to compute the index of the list in which a key-value pair is stored.

Simplified Interface

```
class HashTable {
public:
    void insert(const char* key, T value);
    void remove(const char* key);
    T search(const char* key);
};

```

### Double Linked List

In a double linked list each node points to the next and the previous link in the chain.
    
```
             |----------------------|          |----------------------|
             | std::string key      |          | std::string key      |
             | <T> value            |          | <T> value            |
  / <--------- node<T>* prev        | <--------- node<T>* prev        |
             | node<T>* next   --------------> | node<T>* next ----------------> /
             |----------------------|          |----------------------|
```

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

## Bibliography

- Harold Abelson , Gerald Jay Sussman, Julie Sussman (1996). *Structure and Interpretation of Computer Programs - 2nd Edition.* Cambridge, MA: MIT.
- Saumyendra Sengupta, Carl P. Korobkin (2012). *C++: Object-Oriented Data Structures.* Springer.
