/* 
 * File:   DoublyLinkedList.h
 * Author: tlibal
 *
 * Created on December 14, 2015, 10:48 PM
 */

#ifndef DOUBLYLINKEDLIST_H
#define	DOUBLYLINKEDLIST_H

#include <cstdlib>
#include <string>

struct DoubleLinkNode {
    std::string key;
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
    
    DoubleLinkNode* createNode(std::string key, int value);
    DoubleLinkNode* search(std::string key);
    void insert(DoubleLinkNode* node);
    void insert(std::string key, int value);
    void remove(DoubleLinkNode* node);
private:

};

#endif	/* DOUBLYLINKEDLIST_H */

