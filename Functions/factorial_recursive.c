#include <stdio.h>

int facRec(int num);

int main(){
    int num;

    printf("Enter a number:- ");
    scanf("%d", &num);

    if(facRec(num) == 0){
        printf("factorial cannot be calculated.\n");
    }
    else{
        printf("%d\n", facRec(num));
    }

    return 0;
}

int facRec(int num){
    if(num < 0){
        return 0;
    }
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return num * facRec(num - 1);
    }
}