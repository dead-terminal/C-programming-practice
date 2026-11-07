#include <stdio.h>

int main(){
    int num[5];

    for(int i = 0; i < 5; i++){
    printf("Enter a number:- ");
    scanf("%d", &num[i]);
    }
    for(int i = 4; i >= 0; i--){
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}