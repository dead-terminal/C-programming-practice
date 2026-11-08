#include <stdio.h>

int isPrime(int num);

int main(){
    int num;

    printf("Enter a number:- ");
    scanf("%d", &num);

    int result = isPrime(num);

    if(result == 1){
        printf("Given number is a prime number!\n");
    }
    else{
        printf("Given number is NOT a prime number.\n");
    }

    return 0;
}

int isPrime(int num){

    if(num <= 1){
        return 0;
    }

    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return 0;
        }
    }

    return 1;
}
