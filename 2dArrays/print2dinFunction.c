#include <stdio.h>

void printMatrix(int numbers[3][3], int rows, int cols);

int main(){
    int numbers[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printMatrix(numbers, 3, 3);
    
    return 0;
}

void printMatrix(int numbers[3][3], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d\t", numbers[i][j]);
        }
        printf("\n");
    }
}