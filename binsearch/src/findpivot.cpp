#include "findpivot.h"
#include <math>

int cpptoolkit::findpivot(int* array, int len, int key)
{
    int a = 0;
    int b = len;
    int m;

    while (a<b) {
        m = floor((a+b)/2);
        if (array[m-1]>array[m]) {
            return m;
        }
        a = m + 1;
    }
    return -1;
}

