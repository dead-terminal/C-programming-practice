#include <stdio.h>

int main(){
    int num[5], sum = 0;
    float avg;

    for(int i = 0; i < 5; i++){
    printf("Enter a number:- ");
    scanf("%d", &num[i]);
    }

    int size = sizeof(num) / sizeof(num[0]);

    for(int i = 0; i < 5; i++){
        sum = sum + num[i];
    }
    avg = (float)sum / (int)size;

    printf("Sum:- %d\nAverage:- %.2f\n", sum, avg);

    return 0;
}