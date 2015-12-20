/* 
 * File:   DoublyLinkedList.h
 * Author: tlibal
 *
 * Created on December 14, 2015, 10:48 PM
 */

#ifndef DOUBLYLINKEDLIST_H
#define	DOUBLYLINKEDLIST_H

struct DoubleLinkNode {
    int value;
    DoubleLinkNode* prev;
    DoubleLinkNode* next;
};

class DoublyLinkedList {
public:
    DoubleLinkNode* head;
    DoubleLinkNode* tail;
    DoublyLinkedList();
    virtual ~DoublyLinkedList();
private:

};

#endif	/* DOUBLYLINKEDLIST_H */

