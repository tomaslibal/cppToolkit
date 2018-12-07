#ifndef QUICKSORT_H
#define QUICKSORT_H

template <typename T> void quicksort(T* array, int lo, int hi);

template <typename T> void partition(T* array, int lo, int hi, int& pivot);

#endif /* QUICKSORT_H */
