#include <cstdlib>
#include <cmath>

#include "binsearch.h"

using namespace std;

template <typename T> int binsearch(T lookup, T* list, const int listLen) {
    /* Lower bound for the search
     */
    int a = 0;
    /* Upper bound for the search
     */
    int b = listLen;
    /* The middle point/value
     */
    int m = 0;
    /* Stores the previous middle value
     */
    int prevm = -1;
    
    while(prevm != m) {
        prevm = m;
        m = floor((a + b) / 2);
        
        if (*(list + m) == lookup) {
            return m;
        } else if (*(list + m) > lookup) {
            b = m - 1;
        } else {
            a = m + 1;
        }
    }
    
    return -1;
}

template int binsearch(int lookup, int* list, const int listLen);