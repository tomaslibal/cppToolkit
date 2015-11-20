/* 
 * File:   LinkedList.h
 * Author: tlibal
 *
 * Created on November 20, 2015, 10:09 PM
 */

#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include "linkedNode.h"

template <class T>
class LinkedList {
public:
    linkedNode<T> *first;
    linkedNode<T> *last;
    
    LinkedList();
    LinkedList(const LinkedList& orig);
    virtual ~LinkedList();
private:

};

#endif	/* LINKEDLIST_H */

