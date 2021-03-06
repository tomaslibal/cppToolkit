/* 
 * File:   DoublyLinkedList.cpp
 * Author: tlibal
 * 
 * Created on December 14, 2015, 10:48 PM
 */

#include "DoublyLinkedList.h"

using namespace std;

template <class T> 
DoublyLinkedList<T>::DoublyLinkedList() {
    this->head = NULL;
}

template <class T> 
DoublyLinkedList<T>::~DoublyLinkedList() {
    DoubleLinkNode<T>* x = this->head;
    DoubleLinkNode<T>* next = NULL;
    
    while(x) {
        next = x->next;
        delete x;
        x = next;
    }
}

template <class T> 
DoubleLinkNode<T>* DoublyLinkedList<T>::search(string key) {
    DoubleLinkNode<T>* x = this->head;
    
    while(x && x->key != key) {
        x = x->next;
    }
    
    return x;
}

template <class T> 
void DoublyLinkedList<T>::remove(DoubleLinkNode<T>* node) {
    if (node->prev) {
        node->prev->next = node->next;
    }
    if (node->next) {
        node->next->prev = node->prev;
    }
    delete node;
}

template <class T> 
void DoublyLinkedList<T>::remove(std::string key) {
    DoubleLinkNode<T>* x = this->search(key);
    if (x) {
        this->remove(x);
    }
}

template <class T> 
DoubleLinkNode<T>* DoublyLinkedList<T>::createNode(string key, T value) {
    DoubleLinkNode<T>* node = new DoubleLinkNode<T>;
    node->key = key;
    node->value = value;
    
    return node;
}

template <class T> 
void DoublyLinkedList<T>::insert(DoubleLinkNode<T>* node) {
    node->next = this->head;
    node->prev = NULL;
    if (this->head) {
        this->head->prev = node;
    }
    this->head = node;
}

template <class T> 
void DoublyLinkedList<T>::insert(std::string key, T value) {
    DoubleLinkNode<T>* node = this->createNode(key, value);
    this->insert(node);
}

template <class T>
int DoublyLinkedList<T>::sum() {
    int sum = 0;
    forEach([&sum](T val) {
        sum += val;
    });
    return sum;
}

template <class T>
int DoublyLinkedList<T>::getLength() {
    int len = 0;
    forEach([&len](T val) {
       len++; 
    });
    return len;
}

template <class T>
void DoublyLinkedList<T>::forEach(const function <void (T)>& f) {
    DoubleLinkNode<T>* node = this->head;
    while (node) {
        f(node->value);
        node = node->next;
    }
}

template class DoublyLinkedList<int>;