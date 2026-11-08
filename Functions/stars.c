#include <stdio.h>

void printStars(int n);

int main(){
    int n;

    printf("Enter a number:- ");
    scanf("%d", &n);

    printStars(n);

    printf("\n");

    return 0;
}

void printStars(int n){
    for(int i = 1; i <= n; i++){
        printf("* ");
    }
}