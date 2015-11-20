/* 
 * File:   LinkedList.cpp
 * Author: tlibal
 * 
 * Created on November 20, 2015, 10:09 PM
 */

#include <cstdlib>
#include "LinkedList.h"

using namespace std;

template <class T> LinkedList<T>::LinkedList() {
    this->first = (linkedNode<T>*) malloc(sizeof(linkedNode<T>));
    this->first->id = 1;
    this->first->value = (T) 0;
    this->first->next = NULL;
    
    this->last = NULL;
}

template <class T> LinkedList<T>::LinkedList(const LinkedList& orig) {
}

template <class T> LinkedList<T>::~LinkedList() {
}

template <class T> void LinkedList<T>::addNode(T value) {
    linkedNode<T> *last = this->last;
    
    if (last == NULL) {
        last = this->first;
    }
    
    this->last = addNodeWithValue<T>(last, value);
}

template <class T> int LinkedList<T>::getLength() {
    int c = 0;
    
    linkedNode<T> *node = this->first;
    
    while(node) {
        c++;
        node = node->next;
    }
    
    return c;
}

template <class T> void LinkedList<T>::removeNode(T value) {
    removeNodeByValue(this->first, value);
    this->updatePointerToLastNode();
}

template <class T> void LinkedList<T>::updatePointerToLastNode() {
    linkedNode<T> *node = this->first;
    
    while(node->next) {
        node = node->next;
    }
    
    this->last = node;
}

template class LinkedList<int>;