#include <stdio.h>

int main(){
    int num[5];
    int i, count = 0;

    for(i = 0; i < 5; i++){
    printf("Enter a number:- ");
    scanf("%d", &num[i]);
    }

    for(i = 0; i < 5; i++){
        if(num[i] % 2 == 0){
            count++;
        }
    }
    printf("Number of even elements:- %d\n", count);

    return 0;
}