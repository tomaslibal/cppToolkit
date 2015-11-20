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

template linkedNode<int>* addNodeWithValue(linkedNode<int> *parent, int value);