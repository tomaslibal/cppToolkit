#ifndef HEAP_H 
#define	HEAP_H

#include <vector>

class HeapArray
{
private:
    std::vector<int> oarray;
public:
    HeapArray(std::vector<int> const& a);
    int len;
    int heapsize = 0;

    int get(int idx) { return oarray[idx]; }
    void exchange(int a_idx, int b_idx) { int temp = oarray[a_idx]; oarray[a_idx] = oarray[b_idx]; oarray[b_idx] = temp; }

    int& operator[] (int const idx) { return oarray[idx]; }

    static int getParentIdx(int idx);
    static int getLeftChildIdx(int idx);
    static int getRightChildIdx(int idx);
};

/**
 * Assumes that node at int index child nodes are already max-heaps, but checks
 * if int index node is smaller than one of its childs and recursively fixes up
 * the branch of the tree to maintain the max-heap property.
 */
void max_heapify(HeapArray & ha, int index);
void build_max_heap(HeapArray & ha);

int heapsearch(std::vector<int> const& array, int needle);

#endif
