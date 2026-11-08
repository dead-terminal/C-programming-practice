#include <stdio.h>

int isPrimefifty(int n);

int main(){
    int num[51];
    int i = 0;

    for(i = 0; i <= 50; i++){
        num[i] = i;
    }
    
    for(int i = 0; i <= 50; i++){
        if(isPrimefifty(num[i]) == 1){
        printf("%d ", num[i]);
        }
    }
    printf("\n");
    return 0;
}
int isPrimefifty(int n){
    if(n <= 1){
        return 0;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
        return 0;
        }
    }
    return 1;
    
}