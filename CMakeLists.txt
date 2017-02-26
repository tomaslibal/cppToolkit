cmake_minimum_required (VERSION 2.6)
project (cppToolkit CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/dist)
set(CMAKE_CXX_FLAGS "-std=c++11 -g")

enable_testing()

# Depth First Search Test Suite
add_subdirectory(depthfirstsearch/test)

# Doubly Linked List Test Suite
add_subdirectory(doublyLinkedList/test)

# Bit Flags
add_subdirectory(bitflags/test)

# Chained Hash Table
add_subdirectory(chainedHashTable/test)

# Binary Tree Traversal
add_subdirectory(binTreeTraversal/test)

# Red Black Tree 
add_subdirectory(redBlackTree/test)

# Quicksort
add_subdirectory(quicksort/test)

# Heap (sorting)
add_subdirectory(heap/test)

# LRU Cache
add_subdirectory(LRUCache/test)

# warshall
add_subdirectory(warshall/test)
