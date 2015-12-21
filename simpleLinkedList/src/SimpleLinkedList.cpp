/* 
 * File:   LinkedList.cpp
 * Author: tlibal
 * 
 * Created on November 20, 2015, 10:09 PM
 */

#include <cstdlib>
#include <new>
#include <string.h>
#include "SimpleLinkedList.h"

#include <iostream>
#include <cassert>
#include <cstring>

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

template <class T> SimpleLinkedList<T>::SimpleLinkedList() {
    this->head = (linkedNode<T>*) malloc(sizeof(linkedNode<T>));
    this->head->key = NULL;
    this->head->value = (T) 0;
    this->head->next = NULL;
    
    this->tail = NULL;
}

template <class T> SimpleLinkedList<T>::~SimpleLinkedList() {
    linkedNode<T> *node = this->head;
    linkedNode<T> *next;
    
    while(node) {
        next = node->next;
        this->freeNode(node);
        node = next;
    }
}

template <class T> linkedNode<T>* SimpleLinkedList<T>::createNewNode(const char* key, T value) {
    linkedNode<T>* node = (linkedNode<T>*) malloc(sizeof(linkedNode<T>));
    
    if (!node) {
        throw bad_alloc();
    }
    
    node->key = strdup(key);
    node->value = value;
    
    return node;
}

template <class T> void SimpleLinkedList<T>::setKey(linkedNode<T> *node, const char* key) {
    if (node->key != NULL) {
        node->key = (char*) realloc(node->key, sizeof(key)+1);
        if (!node->key) {
            throw bad_alloc();
        }
        strcpy(node->key, key);
    } else {
        node->key = strdup(key);
    }
}

template <class T> void SimpleLinkedList<T>::addNode(T value) {
    linkedNode<T> *last = this->tail;
    
    if (last == NULL) {
        last = this->head;
    }
    
    this->tail = addNodeWithValue<T>(last, value);
}

template <class T> void SimpleLinkedList<T>::addNode(const char* key, T value) {
    linkedNode<T> *last = this->tail;
    
    if (last == NULL) {
        last = this->head;
    }
    
    this->tail = addNodeWithKeyValue<T>(last, key, value);
}

template <class T> void SimpleLinkedList<T>::insert(const char* key, T value) {
    linkedNode<T>* first = this->head;
    
    linkedNode<T>* node = this->createNewNode(key, value);
    node->next = first; 
    this->head = node;
}

template <class T> int SimpleLinkedList<T>::getLength() {
    int c = 0;
    
    linkedNode<T> *node = this->head;
    
    while(node) {
        c++;
        node = node->next;
    }
    
    return c;
}

template <class T> linkedNode<T>* SimpleLinkedList<T>::atIndex(int idx) {
    linkedNode<T> *node = this->head;
    
    int c = 0;
    
    assert(idx >= 0);
    
    while(node) {
        if (c == idx) {
            return node;
        }
        c++;
        node = node->next;
    }
    
    return NULL;
}

template <class T> void SimpleLinkedList<T>::removeNode(T value) {
    removeNodeByValue<T>(this->head, value);
    this->updatePointerToTailNode();
}

template <class T> void SimpleLinkedList<T>::removeNode(const char* key) {
    removeNodeByKey<T>(this->head, key);
    this->updatePointerToTailNode();
}

template <class T> void SimpleLinkedList<T>::updatePointerToTailNode() {
    linkedNode<T> *node = this->head;
    
    while(node->next) {
        node = node->next;
    }
    
    this->tail = node;
}

template <class T> void SimpleLinkedList<T>::print() {
    printList<T>(this->head);
}

template <class T> linkedNode<T>* SimpleLinkedList<T>::search(T value) {
    linkedNode<T> *node = this->head;
    
    while(node) {
        if (node->value == value) {
            return node;
        }
        node = node->next;
    }
    
    return NULL;
}

template <class T> linkedNode<T>* SimpleLinkedList<T>::search(const char* key) {
    linkedNode<T> *node = this->head;
    
    while(node) {
        if (node->key != NULL && strcmp(node->key, key) == 0) {
            return node;
        }
        node = node->next;
    }
    
    return NULL;
}

template <class T> linkedNode<T>* SimpleLinkedList<T>::search(const char* key, T value) {
    linkedNode<T> *node = this->search(key);
    
    if (node->value == value) {
        return node;
    } else {
        return NULL;
    }
}

template <class T> T SimpleLinkedList<T>::sum() {
    T sum = (T) 0;
    
    linkedNode<T>* node = this->head;
    
    while(node) {
        sum += node->value;
        node = node->next;
    }
    
    return sum;
}

template <class T> void SimpleLinkedList<T>::freeNode(linkedNode<T>* node) {
    if (node->key != NULL) {
        free(node->key);
    }
    free(node);
}

template class SimpleLinkedList<int>;