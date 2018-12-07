/* 
 * File:   ChainedHashTable.cpp
 * Author: tlibal
 * 
 * Created on December 13, 2015, 2:32 PM
 */

#include <cstdlib>
#include <string.h>
#include <new>

#include "ChainedHashTable.h"

using namespace std;

template <class T> ChainedHashTable<T>::ChainedHashTable() {
    this->hashTable = (DoublyLinkedList<T>**) malloc(sizeof(DoublyLinkedList<T>*) * this->tableSize);
    for(short int i = 0; i < this->tableSize; i++) {
        this->hashTable[i] = NULL;
    }
}

template <class T> ChainedHashTable<T>::~ChainedHashTable() {
    for(short int i = 0; i < this->tableSize; i++) {
        if (this->hashTable[i] != NULL) {
            delete this->hashTable[i]; // ->~LinkedList();
        }
    }
    free(this->hashTable);
}

template <class T> int ChainedHashTable<T>::hash(const char* key) {
    // Use 4 char folding
    int intLen = strlen(key) / 4;
    long sum = 0;
    
    for(int r = 0; r <= intLen; r++) {
        char c[4] = { key[r * 4], key[(r * 4)+1], key[(r * 4)+2], key[(r * 4)+3] };
        long mult = 1;
        for (int s = 0; s < 4; s++) {
            sum += c[s] * mult;
            mult *= 256;
        }
    }
    
    // remainding chars: if strlen(key) % 4 > 0:
    int diff = (intLen * 4) - strlen(key);
    long mult = 1;
    for(int x = 0; x < diff; x++) {
        sum += key[(intLen * 4) + x] * mult;
        mult *= 256;
    }
    
    // Normalize the hash value to the size of the hash table
    return(abs(sum) % this->tableSize);
}

template <class T> void ChainedHashTable<T>::insert(const char* key, T value) {
    // get the hash index
    int idx = this->hash(key);
    // obtain the linked list from the index
    DoublyLinkedList<T>* list = this->hashTable[idx];
    
    // if this index has uninitialized list, initialize it
    if (list == NULL) {
        this->hashTable[idx] = new DoublyLinkedList<T>();
        list = this->hashTable[idx];
    } else {
        throw bad_alloc();
    }
    // insert the value into the list
    list->insert(string(key), value);
}

template <class T> T ChainedHashTable<T>::search(const char* key) {
    // get the hash index
    int idx = this->hash(key);
    // obtain the linked list from the index
    DoublyLinkedList<T>* list = this->hashTable[idx];
    if (list == NULL) {
        return NULL;
    }
    // search and return by the key
    DoubleLinkNode<T>* node = list->search(string(key));
    if (node) {
        return node->value;
    } else {
        return NULL;
    }
}

template <class T> void ChainedHashTable<T>::remove(const char* key) {
    // get the hash index
    int idx = this->hash(key);
    // obtain the linked list from the index
    DoublyLinkedList<T>* list = this->hashTable[idx];
    if (list == NULL) {
        return;
    }
    // search and return by the key
    list->remove(string(key));
}

template class ChainedHashTable<int>;
