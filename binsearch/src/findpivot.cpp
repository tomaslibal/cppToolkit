#include "findpivot.h"

int cpptoolkit::findpivot(int* array, int len)
{
    int a = 0;
    int b = len - 1;
    int m;
    
    if (len == 0 || array == nullptr) {
        return -1;
    }
    
    if (array[a] < array[b]) {
        return 0;
    }

    while (a <= b) {
        m = (a + b) / 2;
        
        if (m < len-1 && array[m] > array[m + 1]) {
            return m+1;
        }
        
        if (array[a] < array[m]) {
            a = m + 1;
        } else {
            b = m - 1;
        }        
    }
    return a;
}

