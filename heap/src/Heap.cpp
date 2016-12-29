#include "Heap.h"

#include <cmath>

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
    int const temp = oarray[a_idx-1]; 
    oarray[a_idx-1] = oarray[b_idx-1]; 
    oarray[b_idx-1] = temp;
}

void max_heapify(HeapArray & ha, int index)
{
    int largest;
    int l = ha.getLeftChildIdx(index);
    int r = ha.getRightChildIdx(index);
    if (l <= ha.heapsize && ha[l] > ha[index]) {
        largest = l;
    } else {
        largest = index;
    }
    if (r <= ha.heapsize && ha[r] > ha[largest]) {
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
    for (int i = start; i >= 1; i -= 1) {
        max_heapify(ha, i);
    }
}

std::vector<int> heapsort(std::vector<int> const& array)
{
    HeapArray sort (array);
    int start = static_cast<int>(std::floor(sort.len / 2));
    for (int i = sort.len; i >= 2; i -= 1) {
        sort.exchange(i, 1);
        sort.heapsize--;
        max_heapify(sort, 1);
    }
    return sort.getAsVector();
}
