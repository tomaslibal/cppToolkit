#ifndef HEAP_H 
#define	HEAP_H

class HeapArray
{
private:
    int* array;
public:
    int len;
    int heapsize;
    static HeapArray fromArray(int* a);
};

void max_heapify(HeapArray& ha, int index);
void build_max_heap(HeapArray& ha);

int heapsearch(int* array, int needle);

#endif
