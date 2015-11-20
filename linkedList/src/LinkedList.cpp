/* 
 * File:   LinkedList.cpp
 * Author: tlibal
 * 
 * Created on November 20, 2015, 10:09 PM
 */

#include <cstdlib>
#include "LinkedList.h"

template <class T> LinkedList<T>::LinkedList() {
    this->first = NULL;
    this->last = NULL;
}

template <class T> LinkedList<T>::LinkedList(const LinkedList& orig) {
}

template <class T> LinkedList<T>::~LinkedList() {
}

template class LinkedList<int>;