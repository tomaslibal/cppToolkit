/* 
 * File:   LinkedList.h
 * Author: tlibal
 *
 * Created on November 20, 2015, 10:09 PM
 */

#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

template <typename T> struct linkedNode {
    char* key;
    T value;
    linkedNode<T> *next;
};


#include <initializer_list>

template <typename T> linkedNode<T>* addEmptyNode(linkedNode<T> *parent);
template <typename T> linkedNode<T>* addNodeWithValue(linkedNode<T> *parent, T value);
template <typename T, typename... Args> void addListOfNodesWithValues(linkedNode<T> *parent, Args... values);
template <typename T> linkedNode<T>* addNodeWithKeyValue(linkedNode<T> *parent, const char* key, T value);

template <typename T> linkedNode<T>* getNodeByValue(linkedNode<T> *first, T value);
template <typename T> linkedNode<T>* getNodeByKey(linkedNode<T> *first, const char *key);
template <typename T> linkedNode<T>* getNodeByKeyValue(linkedNode<T> *first, const char *key, T value);

template <typename T> void removeNodeByValue(linkedNode<T> *first, T value);
template <typename T> void removeNodeByKey(linkedNode<T> *first, const char* key);

template <typename T> void printList(linkedNode<T> *first);

template <typename T> void freeList(linkedNode<T> *first);
template <typename T> void freeNode(linkedNode<T> *node);

template <class T>
class SimpleLinkedList {
public:
    linkedNode<T> *head;
    linkedNode<T> *tail;
    
    SimpleLinkedList();
    virtual ~SimpleLinkedList();
    
    void addNode(T value);
    void addNode(const char* key, T value);
    void insert(const char* key, T value);
    
    void removeNode(T value);
    void removeNode(const char* key);
    
    int getLength();
    
    linkedNode<T>* atIndex(int idx);
    linkedNode<T>* search(T value);
    linkedNode<T>* search(const char* key);
    linkedNode<T>* search(const char* key, T value);
    
    void print();
    void setKey(linkedNode<T> *node, const char* key);
    T sum();
    void freeNode(linkedNode<T>* node);
private:
    void updatePointerToTailNode();
    linkedNode<T>* createNewNode(const char* key, T value);

};

#endif	/* LINKEDLIST_H */

