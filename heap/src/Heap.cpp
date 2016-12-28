#include "Heap.h"

#include <cmath>

int HeapArray::getParentIdx(int idx)
{
    return static_cast <int> (std::floor(idx / 2));
}
int HeapArray::getLeftChildIdx(int idx)
{
    return idx << 1;
}
int HeapArray::getRightChildIdx(int idx)
{
    return (idx << 1) + 1;
}
