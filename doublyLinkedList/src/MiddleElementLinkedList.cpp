#include "MiddleElementLinkedList.h"

template <typename T> T middleElement(DoublyLinkedList<T> const& list)
{    
    DoubleLinkNode<T>* fast = list.head;
    DoubleLinkNode<T>* slow = list.head;
    
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    return slow->value;
}

template int middleElement(DoublyLinkedList<int> const& list);