#include <stdio.h>

void findMaxinGrid(int grid[3][3], int i, int j);

int main(){
    int grid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    findMaxinGrid(grid, 3, 3);

}

void findMaxinGrid(int grid[3][3], int i, int j){
    int large = grid[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            large = (large > grid[i][j]) ? large : grid[i][j];
        }
    }
    printf("%d\n", large);
}