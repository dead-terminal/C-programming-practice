#include <stdio.h>

int square(int num);

int main(){
    int num;

    printf("Enter a number:- ");
    scanf("%d", &num);

    int result = square(num);

    printf("Square:- %d\n", result);
    
    return 0;
}

int square(int num){
    return num * num;
}