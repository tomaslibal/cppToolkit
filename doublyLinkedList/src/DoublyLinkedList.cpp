/* 
 * File:   DoublyLinkedList.cpp
 * Author: tlibal
 * 
 * Created on December 14, 2015, 10:48 PM
 */

#include "DoublyLinkedList.h"

using namespace std;

DoublyLinkedList::DoublyLinkedList() {
    this->head = NULL;
    this->tail = NULL;
}

DoublyLinkedList::~DoublyLinkedList() {
    DoubleLinkNode* x = this->head;
    DoubleLinkNode* next = NULL;
    
    while(x) {
        next = x->next;
        delete x;
        x = next;
    }
}

DoubleLinkNode* DoublyLinkedList::search(string key) {
    DoubleLinkNode* x = this->head;
    
    while(x && x->key != key) {
        x = x->next;
    }
    
    return x;
}

DoubleLinkNode* DoublyLinkedList::createNode(string key, int value) {
    DoubleLinkNode* node = new DoubleLinkNode;
    node->key = key;
    node->value = value;
    
    return node;
}

void DoublyLinkedList::insert(DoubleLinkNode* node) {
    node->next = this->head;
    node->prev = NULL;
    if (this->head) {
        this->head->prev = node;
    } else {
        this->tail = node;
    }
    this->head = node;
}

void DoublyLinkedList::insert(std::string key, int value) {
    DoubleLinkNode* node = this->createNode(key, value);
    this->insert(node);
}
