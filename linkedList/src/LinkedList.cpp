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

template class LinkedList<int>;