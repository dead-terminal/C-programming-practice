#include <stdio.h>

int main(){
    int num[5], sum = 0, avg;

    for(int i = 0; i < 5; i++){
    printf("Enter a number:- ");
    scanf("%d", &num[i]);
    }

    size_t size = sizeof(num) / sizeof(num[0]);

    for(int i = 0; i < 5; i++){
        sum = sum + num[i];
    }
    avg = sum / size;

    printf("Sum:- %d \nAverage:- %d\n", sum, avg);

    return 0;
}