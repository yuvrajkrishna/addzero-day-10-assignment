#include<stdio.h>
int main ( ) {

    int n = 5 ;
    int row = n ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <=n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    n--;
    while(n>0){
        for(int i = n ; i >= 1 ; i--){
        for(int j = 1; j <=row-n; j++){
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
        n--;
    }
    }

    return 0 ;

}