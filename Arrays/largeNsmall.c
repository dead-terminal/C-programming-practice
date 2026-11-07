#include <stdio.h>

int main(){
    int num[5];
    int large, small;
    int i;

    for(i = 0; i < 5; i++){
    printf("Enter a number:- ");
    scanf("%d", &num[i]);
    }
    large = (num[0] > num[1]) ? num[0] : num[1];
    large = (large > num[2]) ? large : num[2];
    large = (large > num[3]) ? large : num[3];
    large = (large > num[4]) ? large : num[4];

    printf("Largest element:- %d\n", large);

    small = (num[0] < num[1]) ? num[0] : num[1];
    small = (small < num[2]) ? small : num[2];
    small = (small < num[3]) ? small : num[3];
    small = (small < num[4]) ? small : num[4];

    printf("Smallest element:- %d\n", small);

    return 0;
}