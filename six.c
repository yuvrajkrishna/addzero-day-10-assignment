#include<stdio.h>
int main( ) {
    int n = 5 ;
    for(int i = 1 ; i <= 2*n - 1 ; i++){
        int star = i ;
        if(star > n){
            star = 2*n - i;
        }
        for(int j = 1 ; j<star;j++){
            printf(" ");
        }
        for(int j = 1 ; j<=2*(n-star)+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}