#include <stdio.h>

int main() {

    int n = 5;
    int row = n;

    // Increasing
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    row--;

    // Decreasing
    while(row >= 1) {
        for(int j = 1; j <= row; j++) {
            printf("%d ", j);
        }
        printf("\n");
        row--;
    }

    return 0;
}