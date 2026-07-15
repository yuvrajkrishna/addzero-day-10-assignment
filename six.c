#include<stdio.h>

int main() {

    int n = 5;

    // Upper Half
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j < i; j++)
            printf(" ");

        for(int j = 1; j <= 2*(n-i)+1; j++)
            printf("*");

        printf("\n");
    }

    // Lower Half
    for(int i = 2; i <= n; i++) {

        for(int j = 1; j < n-i+1; j++)
            printf(" ");

        for(int j = 1; j <= 2*i-1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}