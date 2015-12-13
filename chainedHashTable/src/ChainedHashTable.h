/* 
 * File:   ChainedHashTable.h
 * Author: tlibal
 *
 * Created on December 13, 2015, 2:32 PM
 */

#ifndef CHAINEDHASHTABLE_H
#define	CHAINEDHASHTABLE_H

#include "../../linkedList/src/LinkedList.h"

class ChainedHashTable {
public:
    ChainedHashTable();
    ChainedHashTable(const ChainedHashTable& orig);
    virtual ~ChainedHashTable();
    
    void insert(const char* key, int value);
    int search(const char* key);
    int del(const char* key);
private:
    short int tableSize = 100;
    int hash(const char* key);
    LinkedList<int> *hashTable [];
    void createHashTable(short int size);
    void resizeHashTable(short int newSize);
};

#endif	/* CHAINEDHASHTABLE_H */

