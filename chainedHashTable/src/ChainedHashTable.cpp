/* 
 * File:   ChainedHashTable.cpp
 * Author: tlibal
 * 
 * Created on December 13, 2015, 2:32 PM
 */

#include <cstdlib>
#include <string.h>

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

int ChainedHashTable::hash(const char* key) {
    // Use 4 char folding
    int intLen = strlen(key) / 4;
    long sum = 0;
    
    for(int r = 0; r <= intLen; r++) {
        char c[4] = { key[r * 4], key[(r * 4)+1], key[(r * 4)+2], key[(r * 4)+3] };
        long mult = 1;
        for (int s = 0; s < strlen(c); s++) {
            sum += c[s] * mult;
            mult *= 256;
        }
    }
    
    // Normalize the hash value to the size of the hash table
    return(abs(sum) % this->tableSize);
}

void ChainedHashTable::insert(const char* key, int value) {
    
}

int ChainedHashTable::search(const char* key) {
    
}

int ChainedHashTable::del(const char* key) {
    
}

