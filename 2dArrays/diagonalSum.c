#include <stdio.h>

void diagonalSum(int grid[3][3], int rows, int cols);

int main(){
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    diagonalSum(matrix, 3, 3);

    return 0;
}

void diagonalSum(int grid[3][3], int rows, int cols){
    int sum = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == j){
                sum = sum + grid[i][j];
            }
        }
    }
    printf("%d\n", sum);

}