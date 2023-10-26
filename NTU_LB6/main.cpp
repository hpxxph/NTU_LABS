#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <ctime>

void matrixOutput(const int COLS, const int ROWS);

int main() {
    srand(time(NULL));
    
    std::cout << "MATRIX_A" << std::endl; 
    matrixOutput(4, 3); 

    std::cout << "MATRIX_Y" << std::endl; 
    matrixOutput(3, 5);  
    return 0;
}

void matrixOutput(const int COLS, const int ROWS) {

    std::vector<std::vector<int> > matrixVector(ROWS, std::vector<int> (COLS, 0));
    int used[10] = {0};

    std::cout << "\n\t----------MATRIX----------\n" << std::endl; 

    for (int i = 0; i < ROWS; i += 1) {
        for (int j = 0; j < COLS; j += 1) {            
            matrixVector[i][j] = rand() % 10; 
            std::cout << "\t" << matrixVector[i][j]; 
        }
        std::cout << std::endl;
    }

    int diagonals[COLS];
    int maxValue = 0;
    int minValue = matrixVector[0][0]; 

    for (int i = 0; i < ROWS; i += 1) {
        for (int j = 0; j < COLS; j += 1) {
            if (i == j) diagonals[i] = matrixVector[i][j];
        }
    }

    std::cout << std::endl;

    std::cout << "\t--------DIAGONALS--------\n" << std::endl; 

    for (int i = 0; i < COLS; i += 1) {
         std::cout << "\t" << diagonals[i]; 
         if (diagonals[i] > maxValue) {
            maxValue = diagonals[i]; 
         } 
         if (diagonals[i] < minValue) {
            minValue = diagonals[i]; 
         }
    }

    std::cout << std::endl;

    std::cout << "\n\t------MAX_&&_MIN_VALUE------\n" << std::endl; 

    std::cout << "\n\t" << "Max value: " << maxValue << std::endl; 
    std::cout << "\n\t" << "Min value: " << minValue << std::endl;

    std::cout << "\n\t----------------------------\n" << std::endl; 
}