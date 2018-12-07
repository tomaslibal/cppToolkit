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
#include <functional>

template <typename T> struct DoubleLinkNode {
    std::string key;
    T value;
    DoubleLinkNode<T>* prev;
    DoubleLinkNode<T>* next;
};

template <class T>
class DoublyLinkedList {
public:
    DoubleLinkNode<T>* head;
    DoublyLinkedList();
    virtual ~DoublyLinkedList();
    
    DoubleLinkNode<T>* createNode(std::string key, T value);
    DoubleLinkNode<T>* search(std::string key);
    void insert(DoubleLinkNode<T>* node);
    void insert(std::string key, T value);
    void remove(DoubleLinkNode<T>* node);
    void remove(std::string key);
    int sum();
    int getLength();
private:
    void forEach(const std::function <void (T)>& f);

};

#endif	/* DOUBLYLINKEDLIST_H */

