#include "quicksort.h"

template <typename T> void quicksort(T* array, int lo, int hi)
{
    int pivot;

    if (hi > lo) {
        partition(array, lo, hi, pivot);
        quicksort(array, lo, pivot - 1);
        quicksort(array, pivot + 1, hi);
    }
}

template <typename T> void partition(T* array, int lo, int hi, int& pivot)
{
    int i, j;
    T item;
    T tmp;

    item = array[lo];
    j = lo;

    for (i = lo + 1; i <= hi; i++) {
        if (array[i] < item) {
            j++;
            tmp = array[j];
            array[j] = array[i];
            array[i] = array[j];
        }
    }

    pivot = j;
    tmp = array[lo];
    array[lo] = array[pivot];
    array[pivot] = tmp;
}

template void quicksort(int* array, int lo, int hi);
template void partition(int* array, int lo, int hi, int& pivot);