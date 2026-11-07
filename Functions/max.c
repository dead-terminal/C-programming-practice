#include <stdio.h>

int max(int a, int b, int c);

int main(){
    int a, b, c, biggest;

    printf("Enter 3 number:- ");
    scanf("%d %d %d", &a, &b, &c);

    biggest = max(a, b, c);

    printf("Biggest number:- %d", biggest);

    return 0;
}

int max(int a, int b, int c){
    int biggest = 0;

    biggest = (a > b)? a : b;
    biggest = (biggest > c)? biggest : c;

    return biggest;
}