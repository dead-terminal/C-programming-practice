#include <stdio.h>

int factorial(int num);

int main(){
    int num, result;

    printf("Enter a number:- ");
    scanf("%d", &num);

    result = factorial(num);

    printf("%d\n", result);

    return 0;
}

int factorial(int num){
    int fac = 1;

    for(int i = 1; i <= num; i++){
        fac = fac * i;
    }
    return fac;
}