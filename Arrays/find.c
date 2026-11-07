#include <stdio.h>

int main(){
    int num[5] = {43,65,76,23,48};
    int n, count;

    printf("Search a number:- ");
    scanf("%d", &n);

    for(int i = 0; i < 5; i++){
        if(n == num[i]){
            printf("Number found in Index %d\n", i + 1);
            count = 1;
            break;
        }
    }
    if(count != 1){
        printf("Number not found.\n");
    }
    return 0;
}