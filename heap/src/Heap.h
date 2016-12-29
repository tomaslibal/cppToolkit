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
    std::vector<int> getAsVector() { return oarray; }
    void exchange(int const a_idx, int const b_idx);

    int& operator[] (int const idx) { return oarray[idx]; }
    int const& operator[] (int const idx) const { return oarray[idx]; }

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

std::vector<int> heapsort(std::vector<int> const& array);

#endif
