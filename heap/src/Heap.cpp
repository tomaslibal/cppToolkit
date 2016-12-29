#include "Heap.h"

#include <cmath>
#include <iostream>
HeapArray::HeapArray(std::vector<int> const& a)
{
    oarray = a;
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
void HeapArray::exchange(int const a_idx, int const b_idx) 
{
    int const temp = oarray[a_idx]; 
    oarray[a_idx] = oarray[b_idx]; 
    oarray[b_idx] = temp;
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

std::vector<int> heapsort(std::vector<int> const& array)
{
    HeapArray sort (array);
    int start = sort.len-1;
    for (int i = sort.len-1; i > 1; i -= 1) {
        sort.exchange(i, 0);
        sort.heapsize--;
        max_heapify(sort, 0);
    }
    return sort.getAsVector();
}
