#include "Heap.h"

#include <cmath>

HeapArray::HeapArray(std::vector<int> const& a)
{
    oarray = a; //(a.begin(), a.end());  
    len = a.size(); 
    build_max_heap(*this); 
}

int HeapArray::getParentIdx(int idx)
{
    return static_cast<int>(std::floor(idx / 2));
}
int HeapArray::getLeftChildIdx(int idx)
{
    return idx << 1;
}
int HeapArray::getRightChildIdx(int idx)
{
    return (idx << 1) + 1;
}

void max_heapify(HeapArray & ha, int index)
{
    int largest;
    int l = ha.getLeftChildIdx(index);
    int r = ha.getRightChildIdx(index);
    if (l < ha.heapsize && ha[l] > ha[index]) {
        largest = l;
    } else {
        largest = index;
    }
    if (r < ha.heapsize && ha[r] > ha[largest]) {
        largest = r;
    } 
    if (largest != index) {
        ha.exchange(index, largest);
        max_heapify(ha, largest);
    }
}

void build_max_heap(HeapArray & ha)
{
    ha.heapsize = ha.len;
    int start = static_cast<int>(std::floor(ha.len / 2));
    for (int i = start; i > 0; i -= 1) {
        max_heapify(ha, i);
    }
}
