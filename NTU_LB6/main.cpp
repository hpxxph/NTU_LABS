#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

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
    int arr[ROWS][COLS];
    int used[10] = {0};

    std::cout << "\n\t----------MATRIX----------\n" << std::endl; 

    for (int i = 0; i < ROWS; i += 1) {
        for (int j = 0; j < COLS; j += 1) {
            int num;
            do {
                 num = rand() % 10;
            } while (used[num]);
            
            arr[i][j] = num; 
            cout << "\t" << arr[i][j]; 
        }
        cout << endl;
    }

    int diagonals[COLS];
    int maxValue = 0;
    int minValue = arr[0][0]; 

    for (int i = 0; i < ROWS; i += 1) {
        for (int j = 0; j < COLS; j += 1) {
            if (i == j) diagonals[i] = arr[i][j];
        }
    }

    cout << endl;

    std::cout << "\t--------DIAGONALS--------\n" << std::endl; 

    for (int i = 0; i < COLS; i += 1) {
         cout << "\t" << diagonals[i]; 
         if (diagonals[i] > maxValue) {
            maxValue = diagonals[i]; 
         } 
         if (diagonals[i] < minValue) {
            minValue = diagonals[i]; 
         }
    }

    cout << endl;

    std::cout << "\n\t------MAX_&&_MIN_VALUE------\n" << std::endl; 

    cout << "\n\t" << "Max value: " << maxValue << endl; 
    cout << "\n\t" << "Min value: " << minValue << endl;

    std::cout << "\n\t----------------------------\n" << std::endl; 
}