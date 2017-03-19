# In the toolkit

"[Y]ou must read and write computer programs -- many of them... The programmer must seek both perfection of part and adequacy of collection... Since large programs grow from small ones, it is crucial that we develop an arsenal of standard program structures of whose correctness we have become sure--we call them idioms--and learn to combine them into larger structures using organizational techniques of proven value" (Abelson, Sussman and Sussman, 1996, pp. xiii-xiv).

As the repository name suggests, the reference code implementations are written in C++. For some components it will be necessary to use a C++11 compiler.

## Components

- Bit flags
- Binary search algorithm
- Find pivot in a sorted array
- Binary tree traversal
- Hash table
- Double linked list
- Red-black tree
- Quicksort
- Heapsort and max-heap data structure
- LRU Cache
- Warshall algorithm
- Depth First Search

### Bit flags

Bit flags operations implemented are *set* and *unset* flag bitwise operations. This is a header file only implementation.

### Binary search

A templated binary search function which can be parameterized with the type of the array in which the lookup is performed.

### Find pivot in a sorted array

Assumes an ascending order sorting. Let a = [6, 7, 8, 1, 2]. Then the number 1 at index 4 (assuming a zero indexed array)
is the pivot in this array.

This is implemented as `cpptoolkit::findpivot(int* arr, int len)`.

### Binary Tree Traversal

Preorder, Inorder, and Postorder binary tree traversal methods are illustrated.

### Quicksort

Quicksort (Partition exchange sort) is a divide-and-conquer search algorithm:

- split the array into smaller subarrays
- sort the subarrays
- merge the sorted subarrays

Part of the algorithm's performance comes from the strategy used to choose the pivot. This implementation uses the original pivot choosing strategy which is to initially set the beginning of a partition to be the pivot. The worst-case asymptotical running time n^2 is largely due to this choice for an input which is already sorted in an descending order.

### Heapsort

Implemented using the max-heap data structure. This max-heap implementation uses 1-indexed array access because operations getLeftChildIdx and getRightChildIdx use left bitshift by 1 and so if it were a 0-indexed array, it would require a different operation for the first element to get its left and right child nodes' indexes (`0 << 1` is still a zero).

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

This exercise includes an algorithm to find the middle element of the linked list.

#### Find the middle element in a linked list

Implemented using two pointers `slow` and `fast`.

### Red-Black Tree

An implementation of a balanced search tree. 

### LRU (Least Recently Used) Cache 

Cache with the Least Recently Used (LRU) Cache Replacement Policy. Some other replacement policies are listed on [wikipedia](https://en.wikipedia.org/wiki/Cache_replacement_policies).

### Warshall algorithm

Warshall's algorithm finds for all pairs of nodes whether there is a path between them. This is implemented as `cpptoolkit::warshall` and the invariant is that the int[][] array is the adjacency matrix of a given graph. The algorithm works in-place so you want to make a copy of the adjancency matrix if you'll need the original one.

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
