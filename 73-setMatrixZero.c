#include <stdbool.h>
#include <stdlib.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int m = matrixSize;
    int n = *matrixColSize;
    
    // Flags to mark rows and columns to be set to zero
    bool* rowZero = (bool*)malloc(m * sizeof(bool));
    bool* colZero = (bool*)malloc(n * sizeof(bool));
    
    // Initialize with false values
    for (int i = 0; i < m; ++i) {
        rowZero[i] = false;
    }
    for (int j = 0; j < n; ++j) {
        colZero[j] = false;
    }
    
    // Find the positions of all zeros
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0) {
                rowZero[i] = true;
                colZero[j] = true;
            }
        }
    }
    
    // Set rows to zero
    for (int i = 0; i < m; ++i) {
        if (rowZero[i]) {
            for (int j = 0; j < n; ++j) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Set columns to zero
    for (int j = 0; j < n; ++j) {
        if (colZero[j]) {
            for (int i = 0; i < m; ++i) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Clean up dynamically allocated memory
    free(rowZero);
    free(colZero);
}
