#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cstring>
#include "linkedNode.h"

using namespace std;

template <typename T> linkedNode<T>* addEmptyNode(linkedNode<T> *parent) 
{
    linkedNode<T> *newNode;
    
    newNode = (linkedNode<T>*) malloc(sizeof(linkedNode<T>));
    
    assert(newNode != NULL);
    
    newNode->key = NULL;
    newNode->value = (T) 0;
    newNode->next = NULL;
    
    parent->next = newNode;
    
    return newNode;
}

template <typename T> linkedNode<T>* addNodeWithValue(linkedNode<T> *parent, T value)
{
    linkedNode<T> *newNode = addEmptyNode(parent);
    newNode->value = value;
    return newNode;
}

template <typename T> void removeNodeByValue(linkedNode<T> *node, T value) {
    linkedNode<T> *prev = NULL;
    
    while(node) {
        if (node->value == value) {
            if (prev) {
                prev->next = node->next;
                freeNode<T>(node);
            } else {
                freeNode<T>(node);
            }
            break;
        }
        prev = node;
        node = node->next;
    }
}

template <typename T> void removeNodeByKey(linkedNode<T> *node, const char* key) {
    linkedNode<T> *prev = NULL;
    
    while(node) {
        if (node->key && (strcmp(node->key, key) == 0)) {
            if (prev) {
                prev->next = node->next;
                freeNode<T>(node);
            } else {
                freeNode<T>(node);
            }
            break;
        }
        prev = node;
        node = node->next;
    }
}

template <typename T> void freeList(linkedNode<T> *node) {
    linkedNode<T> *next;
    
    while(node) {
        next = node->next;
        freeNode<T>(node);
        node = next;
    }
}

template <typename T> void freeNode(linkedNode<T> *node) {
    if (node->key != NULL) {
        free(node->key);
    }
    free(node);
}

template <typename T> void printList(linkedNode<T> *first) {
    linkedNode<T> *curr;
    
    curr = first;
    
    while(curr) {
        cout << curr->value << "::";
        curr = curr->next;
    }
    
    cout << "END" << std::endl;
}

template <typename T> linkedNode<T>* addNodeWithKeyValue(linkedNode<T> *parent, const char* key, T value) {
    linkedNode<T> *newNode = addNodeWithValue<T>(parent, value);
    if (newNode->key = (char*) malloc(sizeof(key)+1)) {
        strcpy(newNode->key, key);
    } else {
        throw bad_alloc();
    }
    return newNode;
}

template <typename T> linkedNode<T>* getNodeByValue(linkedNode<T> *first, T value) {
    linkedNode<T> *node = first;
    
    while(node) {
        if (node->value == value) {
            return node;
        }
        node = node->next;
    }
    
    return NULL;
}

template <typename T> linkedNode<T>* getNodeByKey(linkedNode<T> *first, const char *key) {
    linkedNode<T> *node = first;
    
    while(node) {
        if (node->key != NULL && strcmp(node->key, key) == 0) {
            return node;
        }
        node = node->next;
    }
    
    return NULL;
}

template <typename T> linkedNode<T>* getNodeByKeyValue(linkedNode<T> *first, const char *key, T value) {
    linkedNode<T> *node = first;
    ;
    while(node) {
        if (node->key != NULL && strcmp(node->key, key) == 0 && node->value == value) {
            return node;
        }
        node = node->next;
    }
    
    return NULL;
}

template linkedNode<int>* addNodeWithValue(linkedNode<int> *parent, int value);
template linkedNode<int>* addNodeWithKeyValue(linkedNode<int> *parent, const char* key, int value);
template void removeNodeByValue(linkedNode<int> *node, int value);
template void removeNodeByKey(linkedNode<int> *node, const char* key);
template void freeList(linkedNode<int> *node);
template void printList(linkedNode<int> *first);
template linkedNode<int>* getNodeByKey(linkedNode<int>* first, const char* key);
template linkedNode<int>* getNodeByValue(linkedNode<int>* first, int value);
template linkedNode<int>* getNodeByKeyValue(linkedNode<int>* first, const char* key, int value);