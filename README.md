# In the toolkit

- *Hash Table (chained)* Contains a string hashing function. Collisions are stored at the same index as a linked list of values. Uses the Linked List from the next example.
- *Double Linked List:* Each node points to the next and previous link in the chain.
    
```
             |----------------------|          |----------------------|
             | std::string key      |          | std::string key      |
             | <T> value            |          | <T> value            |
  / <--------- node<T>* prev        | <--------- node<T>* prev        |
             | node<T>* next   --------------> | node<T>* next ----------------> /
             |----------------------|          |----------------------|
```

- *Binary search algorithm*
- *Bit flags operations* set and unset flag bitwise operations, as a header file only implementation

## Working with the project

The project can be best opened with Netbeans IDE. This repository contains a *nbproject* folder with the configuration which adds *Logical folders*, and Debug and Release build steps into the IDE.

### Tests

```
make test
```

Each item in the toolkit has a `src` source directory and a `test` directory with tests. Netbeans project is setup with logical folders and each test suite can be run from there or from the command line using the GNU make utility.

----

Tomas
