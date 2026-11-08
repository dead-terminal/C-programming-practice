#include <stdio.h>

int main(){
    int matrix[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter Row %d and Column %d:- ", i, j);
            scanf("%d", &matrix[i][j]);

        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}