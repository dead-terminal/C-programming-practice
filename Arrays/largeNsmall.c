#include <stdio.h>

int main(){
    int num[5];
    int large, small;
     
    for(int i = 0; i < 5; i++){
    printf("Enter a number:- ");
    scanf("%d", &num[i]);
    }
    large = num[0];
    small = num[0];

    for(int i = 0; i < 5; i++){
        if(large < num[i]){
            large = num[i];
        }
    }
    for(int i = 0; i < 5; i++){
        if(small > num[i]){
            small = num[i];
        }
    }

    printf("Largest number:- %d\n", large);
    printf("Smallest number:- %d\n", small);

    return 0;
}