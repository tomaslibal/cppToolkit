#ifndef LRU_CACHE_H
#define LRU_CACHE_H

#include <utility>

#include "../../doublyLinkedList/src/DoublyLinkedList.h"

template <class K, class V>
class LRUCache {
private:
    DoublyLinkedList<std::pair<K, V>> list;
public:
    LRUCache();
    virtual ~LRUCache();
}

#endif LRU_CACHE_H