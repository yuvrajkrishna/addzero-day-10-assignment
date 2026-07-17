#include<stdio.h>

int main() {

    int n = 5;

    for(int i = 1; i <= 2*n-1; i++) {

        int space, star;

        if(i <= n) {
            space = n - i;
            star = 2*i - 1;
        }
        else {
            space = i - n;
            star = 2*(2*n - i) - 1;
        }

        for(int j = 1; j <= space; j++)
            printf(" ");

        for(int j = 1; j <= star; j++) {

            if(i == 1 || i == 2*n-1 || j == 1 || j == star)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}