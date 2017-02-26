#pragma once

#include <stdlib.h>
#include <vector>

namespace cpptoolkit {
    /**
     * adjacency matrix
     * 
     */
    class adjm {
    private:    
    public:
        int** matrix;
        int m;
        
        adjm(int m) 
        {
            int initial_value = 0;
            this->m = m;
            
            matrix = (int**) malloc(sizeof(int*) * m);
            if (matrix == nullptr) {
                // malloc error
                exit(1);
            }
            
            for (int i = 0; i < m; i++) {
                
                matrix[i] = (int*) malloc(sizeof(int) * m);
                if (matrix[i] == nullptr) {
                    // malloc error
                    exit(1);
                }
                
                for (int j = 0; j < m; j++) {
                    matrix[i][j] = initial_value;
                }
            }
        }
        
        virtual ~adjm()
        {
            for (int i = 0; i < this->m; i++) {
                free(matrix[i]);
            }
            free(matrix);
        }
        
        void copyRow(int rowNum, std::vector<int> const& row) 
        {
            for (int i = 0; i < this->m; i++) {
                matrix[rowNum][i] = row[i];
            }
        }
            
    };
}
