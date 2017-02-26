#include "warshall.h"

void cpptoolkit::warshall(int** adjMatrix, int m)
{
    // make diagonal entries 1
    for (int i = 0; i < m; i++) {
        adjMatrix[i][i] = 1;    
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (adjMatrix[j][i] == 1) {
                for (int k = 0; k < m; k++) {
                    adjMatrix[j][k] = adjMatrix[j][k] | adjMatrix[i][k];
                }
            }
        }
    }
}
