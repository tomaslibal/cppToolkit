#include <cstdlib>
#include <iostream>
#include <cassert>
#include "linkedNode.h"

using namespace std;

template <typename T> linkedNode<T>* addEmptyNode(linkedNode<T> *parent) 
{
    linkedNode<T> *newNode;
    
    newNode = (linkedNode<T>*) malloc(sizeof(linkedNode<T>));
    
    assert(newNode != NULL);
    
    newNode->id = 0;
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
                free(node);
            } else {
                free(node);
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
        free(node);
        node = next;
    }
}

template linkedNode<int>* addNodeWithValue(linkedNode<int> *parent, int value);
template void removeNodeByValue(linkedNode<int> *node, int value);
template void freeList(linkedNode<int> *node);