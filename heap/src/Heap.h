#ifndef HEAP_H 
#define	HEAP_H

#include <vector>

class HeapArray
{
private:
    std::vector<int> oarray;
public:
    HeapArray(std::vector<int> const& a) : oarray(a.begin(), a.end()) { len = a.size(); }
    int len;
    int heapsize = 0;
};

void max_heapify(HeapArray & ha, int index);
void build_max_heap(HeapArray & ha);

int heapsearch(std::vector<int> const& array, int needle);

#endif
