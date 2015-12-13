/* 
 * File:   ChainedHashTable.cpp
 * Author: tlibal
 * 
 * Created on December 13, 2015, 2:32 PM
 */

#include <cstdlib>

#include "ChainedHashTable.h"

using namespace std;

ChainedHashTable::ChainedHashTable() {
    this->hashTable = (LinkedList<int>**) malloc(sizeof(LinkedList<int>**) * this->tableSize);
    for(short int i = 0; i < this->tableSize; i++) {
        this->hashTable[i] = NULL;
    }
}

ChainedHashTable::ChainedHashTable(const ChainedHashTable& orig) {
}

ChainedHashTable::~ChainedHashTable() {
    for(short int i = 0; i < this->tableSize; i++) {
        if (this->hashTable[i] != NULL) {
            delete this->hashTable[i]; // ->~LinkedList();
        }
    }
    free(this->hashTable);
}

